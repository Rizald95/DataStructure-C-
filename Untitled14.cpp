#include <stdio.h>
#inlcude <stdlib.h>

struct node {
	int data;
	struct node *link;
	
};

int main() {
	print_data(head);
}

void print_data(struct node *head) {
	if(head == NULL)
		printf("Linked list is empty");
	struct node *ptr = NULL;
	ptr = head;
	while(ptr !=NULL) {
		printf("%d", ptr->data);
		ptr = ptr->link;
		
	}
}
