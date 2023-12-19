//doubly linked list: insertion at the beginning of the list

#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

int main() {
	struct node* head = NULL;
	struct node* ptr;
	head = addToEmpty(head, 45);
	head = addAtBag(head, 35);
	
	ptr = head;
	while(ptr !=NULL) {
		printf("%d", ptr->data);
		ptr = ptr->next;
	}
	return 0;
	
}

struct node* addAtBeg(struct node* head, int data) {
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}
