//program 1 : stack_arr[0] as the top - part 3

// isEmpty()
//isFull()
//peek()

//program to implement a stack in an array stack_arr, using stack_arr[0] as the top element

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

int isFull()
{
	if(first == MAX - 1)
		return 1;
	else
		return 0;
		
}

int isEmpty()
{
	if(first == -1)
		return 1;
	else
		return 0;
		
}

void push(int data)
{
	int i;
	if(isFull()) {
		printf("stack overflow\n");
		exit(1);
	}
	first += 1;
	for(i= first; i>0; i--)
		stack_arr[i] = stack_arr[i - 1];
		
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
 

int isFull()
{
	if(first == MAX -1)
		return 1;
	else
		return 0;
		
}

int peek()
{
	if(isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return stack_arr[0];
	
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
		printf("%d", stack_arr[i]);
	printf("\n");
	
}

int main()
{
	int choice, data;
	while(1)
	{
		printf("\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print the top element\n");
		printf("4. Print all the elements of the stack\n");
		printf("5. quit\n");
		printf("Please enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1: 
				printf("enter the element to be pushed: ");
				scanf("%d", &data);
				push(data);
				break;
				
			case 2:
				data = pop();
				printf("deleted element is %d\n", data);
				break;
				
			case 3:
				printf("The topmost element of the stack is %d\n", peek());
				break;
				
			case 4:
				print();
				break;
			
			case 5:
				exit(1);
				
			default:
				printf("wrong choice\n");	
		}
	}
	
	return 0;
	
}
