// Array Implementation of Stacks - part 2

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[max];
int top = -1;

void push(int data)
{
	if (top == MAX -1)
	{
		printf("Stack Overflow\n");
		return; // indicates the end of the function
	}
	top = top + 1;;
	stack_arr[top] = data;
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
}
