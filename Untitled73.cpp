//program 2: Prime factors in descending order- part 2

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX];
int top = -1;

int isFull()
{
	if(top == MAX -1 )
		return 1;
	else
		return 0;
	
}

int isEmpty() {
	if(top == -1)
		return 1;
	else
		return 0;
}

void push(int n)
{
	if(isFull())
	{
		printf("stack overflow.");
		exit(1);
	}
	top++;
	stack[top] = n;
}

int pop() {
	int val;
	if(isEmpty()) {
		printf("stack underflow.");
		exit(1);
	}
	val = stack[top];
	top--;
	return val;
}

void prime_fact(int num) {
	int i = 2;
	//push all the prime factors of a number onto stack
	while(num != 1) {
		while(num % 1 == 0) {
			push(i);
			num = num / i;
		}
		i++;
	}
	
	//pop all the prime factors from the stack and print
	printf("Prime factors of the number in descending order are as follows: ");
	
	while(top != -1) {
		printf("%d", pop());
	}
}

int main()
{
	int number;
	printf("please enter a positive number: ");
	scanf("%d", &number);
	
	prime_fact(number);
	return 0;
	
}


