//circular doubly linked list: deleting the last node

#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	int data;
	struct node* next;
};

struct node* addToEmpty(int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = temp;
	temp->data = data;
	temp->next = temp;
	return temp;
	
}

struct node* addAtEnd(struct node* tail, int data)
{
	struct node* newP = addToEmpty(data);
	if(tail == NULL)
	{
		return newP;
	}
	else
	{
		struct node* temp = tail->next;
		newP->next = temp;
		newP->prev = tail;
		tail->next = newP;
		temp->prev = newP;
		tail = newP;
		return tail;
	}
}

struct node* delLast(struct node* tail)
{
	struct node* temp;
	if(tail == NULL)
		return tail;
		
	if(temp == tail)
	{
		free(tail);
		tail = NULL;
		return tail;
		
	}
	
	temp = tail->prev;
	temp->next = tail->next;
	tail->next->prev = temp;
	free(tail);
	tail = temp;
	return tail;
	
}

void print(struct node* tail)
{
	if(tail == NULL)
		printf("No node in the list");
	else {
		struct node* temp = tail->next;
		do
		{
			printf("%d", temp->data);
			temp = temp->next;
		} while(temp != tail->next);
	}
	printf("\n");
}

int main()
{
	struct node* tail = NULL;
	tail = addToEmpty(34);
	tail = addAtEnd(tail, 45);
	tail = addAtEnd(tail, 56);
	
	printf("list before deletion: ");
	print(tail);
	
	tail = delLast(tail);
	
	printf("list after deletion: ");
	print(tail);
	return 0;
	
}
