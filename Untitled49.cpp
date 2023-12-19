//Circular singly Linked list: Deleting the last Node

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* addToEmpty(int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = temp;
	return temp;
	
}

struct node* addAtEnd(struct node* tail, int data)
{
	struct node* newP = malloc(sizeof(struct node));
	newP->data = data;
	newP->next = NULL;
	
	newP->next = tail->next;
	tail->next = newP;
	tail = tail->next;
	return tail;
}

struct node* createList(struct node* tail)
{
	int i, n, data;
	printf("enter the number of nodes of the linked list");
	scanf("%d", &n);
	
	
	if(n == 0)
		return tail;
	printf("enter the element 1: ");
	scanf("%d", &data);
	tail = addToEmpty(data);
	
	for(i=1; i<n; i++)
	{
		printf("enter the element %d: ", i+1);
		scanf("%d", &data);
		tail = addAtEnd(tail, data);
	}
	return tail;
}

struct node* delLast(struct node* tail)
{
	if(tail == NULL)
		return tail;
	
	struct node* temp = tail->next;
	if(tail->next == tail)
	{
		free(tail);
		tail = NULL;
		return tail;
		
	}
	while(temp->next != tail)
	{
		temp = temp->next;
	}
	temp->next = tail->next;
	free(tail);
	tail = temp;
	return tail;
	
}

void print(struct node* tail)
{
	if(tail == NULL)
		printf("no node in the list.");
	else {
		struct node* p = tail->next;
		do {
			printf("%d", p->data);
			p = p->next;
		} while(p!= tail->next);
	}
	printf("\n");
}

int main()
{
	struct node* tail = NULL;
	tail = createList(tail);
	printf("\nList before Deletion: ");
	print(tail);
	
	tail = delLast(tail);
	printf("list after deletion: ");
	print(tail);
	return 0;
	
}
