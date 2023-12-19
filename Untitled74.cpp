//program 3 : decimal to binary using stacks
// actual Procedure
// procedure: divide the number by 2 , store the remainder somewhere,
//repeat step 1 and 2 until quotient becomes 0, print all the remainders in reverse order

// decimal to binary algorithms
//algorithms: divide the number by 2, store the remainder inside stack,
//repeat step 1 and step 2 until quotient becomes 0
//pop all the elements out of stack and print

//write a program to convert a decimal number to binary in c


#include <stdio.h>
#include <stdlib.h>
#define MAX 100

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

void push(int data)
{
	if(isFull())
	{
		printf("stack overflow.");
		exit(1);
	}
	top++;
	stack[top] = data;
	
}

int pop()
{
	int val;
	if(isEmpty())
	{
		printf("stack underflow. ");
		exit(1);
	}
	val = stack[top];
	top--;
	return val;
	
}

void dec2bin(int n)
{
	//push all the reminder onto stack
	while(n != 0) {
		push(n%2);
		n = n/2;
		
	}
}

void print()
{
	if(isEmpty())
	{
		printf("stack underflow. ");
		exit(1);
		
	}
	while(!isEmpty()) {
		printf("%d", pop());
	}
}

int main()
{
	int dec;
	printf("Enter the decimal number: ");
	scanf("%d", &dec);
	
	dec2bin(dec);
	print();
	
	return 0;
	
}
