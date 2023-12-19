//Circular doubly linked list: insertion at the beginning

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
	struct node* newP = addToEmpty(data);
	if(tail == NULL)
	{
		return newP;
	}
	else {
		struct node* temp = tail->next;
		newP->prev = tail;
		newP->next = temp;
		temp->prev = newP;
		tail->next = newP;
		
	}
}

int main()
{
	struct node* tail = NULL;
	tail = addToEmpty(45);
	tail = addAtBeg(tail, 34);
	print(tail);
	return 0;
	
}
