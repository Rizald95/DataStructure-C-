//circular singly linked list: count the number of elements

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

void countElements(struct node* tail);
{
	struct node* = tail->next;
	int count = 0;
	while(temp != tail)
	{
		temp = temp->next;
		count++;
	}
	count++;
	printf("these are %d elements in the list.\n", count);
}

int main()
{
	struct node* tail = NULL;
	tail = addToEmpty(34);
	tail = addAtEnd(tail, 45);
	tail = addAtEnd(tail, 66);
	tail = addAtEnd(tail, 6);
	
	countElements(tail);
	return 0;
	
	
}



