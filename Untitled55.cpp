//Circular Doubly linked list: Insertion in between

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

struct node* addAtBeg(struct node* tail, int data)
{
	struct node* temp = tail->next;
	struct node* newP = malloc(sizeof(struct node));
	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	
	newP->prev = tail;
	newP->next = temp;
	temp->prev = newP;
	tail->next = newP;
	return tail;
	
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

struct node* addAterPos(struct node* tail, int data, int pos)
{
	struct node* newP = addToEmpty(data);
	if(tail == NULL)
		return newP;
	struct node* temp = tail->next;
	while(pos > 1)
	{
		temp = temp->next;
		pos--;
	}
	newP->prev = temp;
	newP->next = temp->next;
	temp->next->prev = newP;
	temp->next = newP;
	if(temp == tail)
		tail = tail->next;
	return tail;

	
}

int main()
{
	struct node* tail = NULL;
	tail = addToEmpty(34);
	tail = addAtEnd(tail, 45);
	tail = addAtEnd(tail, 6);
	tail = addAfterPos(tail, 56, 2);
	print(tail);
	return 0;
	
}























