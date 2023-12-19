//stacks - Linked list Implementation - part 2


#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
} *top = NULL;

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
	printf("the stack elements are: ");
	while(temp) {
		printf("%d", temp->data);
		temp = temp->link;
		
	}
	printf("\n");
}

int main()
{
	int choice, data;
	while(1) {
		printf("1. push\n");
		printf("2. print\n");
		printf("3. quit\n");
		printf("enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				printf("enter the element to be pushed: ");
				scanf("%d", &data);
				push(data);
				break;
			
			case 2: print(); break;
			
			case 3: exit(1);
			
			default:
				printf("wrong choice\n");
				break;
				
		}
	}
	return 0;
	
}
