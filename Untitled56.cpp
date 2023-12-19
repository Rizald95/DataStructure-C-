//Circular Doubly linked list: deleting the first node

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

struct node* delFirst(struct node* tail)
{
	if(tail == NULL)
		return tail;
	struct node* temp = tail->next;
	if(temp == tail)
	{
		free(tail);
		tail = NULL;
		return tail;
	}
	tail->next = temp->next;
	temp->next->prev = tail;
	free(temp);
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
	tail = addAtEnd(tail, 6);
	
	printf("List before deletion: ");
	print(tail);
	
	tail = delFirst(tail);
	
	printf("list after deletion: ");
	print(tail);
	return 0;
	
}



