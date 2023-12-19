//doubly linked list: insertion at the end of the list

#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

//traversal
//step 2 : attach new node to the end node of the list

int main() {
	struct node* head = NULL;
	struct node* ptr;
	head = addToEmpty(head, 45);
	head = addAtBeg(head, 34);
	head = addAtEnd(head, 9);
	
	ptr = head;
	while(ptr != NULL) {
		ptr = ptr->next;
	}
	return 0;
}

struct node* addAtEnd(struct node* head, int data) {
	struct node* temp, *tp;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	tp = head;
	while(tp->next !=NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	return head; 	
}
