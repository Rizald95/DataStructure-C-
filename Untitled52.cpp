//circular singly linked list: Searching the Elements

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

int searchElement(struct node* tail, int element)
{
	struct node* temp;
	int index = 0;
	if(tail == NULL)
		return -2;
	
	temp = tail->next;
	do {
		if(temp->data == element)
			return index;
		temp = temp->next;
		index++;
	} while(temp != tail->next);
	return -1;
}




int main()
{
	struct node *tail = NULL;
	int element;
	tail = addToEmpty(34);
	tail = addAtEnd(tail, 45);
	tail = addAtEnd(tail, 66);
	tail = addAtEnd(tail, 6);
	
	printf("enter the element: ");
	scanf("%d", &element);
	
	int index = searchElement(tail, element);
	if(index == -1)
		printf("element not found!");
	else if(index == -2)
		printf("Linked list is empty!");
	else
		printf("element %d is at index %d", element, index);
	return 0;
}
