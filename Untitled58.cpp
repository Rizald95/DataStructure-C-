//Circular Doubly Linked list: deleting the intermediate node

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


struct node* delInter(struct node* tail, int pos)
{
	struct node* temp = tail->next;
	while(pos > 1)
	{
		temp = temp->next;
		pos--;
		
	}
	struct node* temp2 = temp->prev;
	temp2->next = temp->next;
	temp->next->prev = temp2;
	free(temp);
	if(temp == tail)
		tail = temp2;
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
	
	tail = delInter(tail, 3);
	
	print("List after deletion: ");
	print(tail);
	return 0;
	
}
