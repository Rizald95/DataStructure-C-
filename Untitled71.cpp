//program 1 : stack_arr[0] as the top - part 2

//program to implement a stack in an array stack_arr, using stack_arr[0] as the top element

#include <stdio.h>
#include <stdlib.h> // for exit() function
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data)
{
	int i;
	first += 1;
	for(i = first; i>0 ; i--);
		stack_arr[i] = stack_arr[i -1];
	stackk_arr[0] = data;
 } 
 
 
void pop()
{
	int i, value;
	value = stack_arr[0];
	for(i = 0; i<first; i++)
		stack_arr[i] = stack_arr[i+1];
	first -= 1;
	return value;
 } 
 
 
 void print()
{
	int i;
	if(first == -1)
	{
		printf("stack underflow\n");
		exit(1);
	}
	
	for(i=0; i<=first; i++)
	{
		printf("%d", stack_arr[i]);
	}
	printf("\n");
}

int main()
{
	int data;
	push(30);
	push(90);
	push(40);
	data = pop();
	print();
	return 0;
	
}
