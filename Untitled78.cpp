//program 4: reverse a stack using two stack - part 2

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

int isEmpty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
		
}

void push(int data) {
	struct node* newNode;
	newNode = malloc(sizeof(newNode));
	
	//checking if memory cant be allocated for some reason
	if(newNode == NULL)
	{
		printf("stack overflow.");
		exit(1);
	}
	newNode->data = data;
	newNode->link = NULL;
	
	newNode->link = top;
	top = newNode;
}

void print()
{
	struct node* temp;
	temp = top;
	if(isEmpty())
	{
		printf("stack underflow.");
		exit(1);
		
	}
	printf("the stack elements are: ");
	while(temp) {
		printf("%d", temp->data);
		temp = temp->link;
	}
	printf("\n");
	
}

int main() {
	struct node* top = NULL;
	struct node* top1 = NULL;
	struct node* top2 = NULL;
	
	push(1, top);
	print(top);
	return 0;
	
}
