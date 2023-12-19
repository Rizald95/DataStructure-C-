//program 4: reverse a stack using two stack - part 3

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

int isEmpty(struct node* top)
{
	if(top == NULL)
		return 1;
	else
		return 0;
		
}

struct node* push(int data, struct node* top)
{
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
	return top;
	
}

void print(struct node* top)
{
	struct node* temp;
	temp = top;
	if(isEmpty(top))
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

int main()
{
	struct node* top = NULL;
	struct node* top1 = NULL;
	struct node* top2 = NULL;
	
	top = push(1, top);
	top = push(2, top);
	top = push(3, top);
	print(top);
	return 0;
	
}
