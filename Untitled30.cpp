//deleting the single linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};




int main() {
	head = reverse(head);
	ptr = head;
	while(ptr != NULL) {
		printf("%d", ptr->data);
		ptr = ptr->link;
	}
	return 0;
}

struct node* reverse(struct node *head) {
	struct node *prev = NULL;
	struct node *next = NULL;
	while(head !=NULL) {
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return head;
}

//singly linked list solved problem
//consider an implementation of unsorted singly linked list. suppose it has its representation with a head and a tail pointer.
//(i.e pointers to the first and last nodes of the linked list). given the representation, which of the following operation can not be
//implementde in 0(1) time?

//answer is deletion of the last node of the linked list
