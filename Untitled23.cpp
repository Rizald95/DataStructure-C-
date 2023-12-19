#include <stdio.h>
#include <stdlib.h>

//deleting the last node of the single linked list

struct node {
	int data;
	struct node *link;
};

int main() {
	head = del_last(head);
	ptr = head;
	while(ptr !=NULL) {
		printf("%d", ptr->data);
		ptr = ptr->link;
		
	}
	return 0;
}

struct node* del_last(struct node *head) {
	if(head == NULL)
		printf("List is already empty!");
	else if(head->link == NULL) {
		free(head);
		head = NULL;
	}
	else {
		struct node *temp = head;
		struct node *temp2 = head;
		while
	}
}
