#include <stdio.h>
#include <stdlib.h>

//deleteing the last node of the single linked list

struct node {
	int data;
	struct node *link;
};


struct node* del_last(struct node *head) {
	if(head == NULL)
		printf("list is already empty!");
	else if(head->link == NULL) {
		free(head);
		head = NULL;
		
	}
	
	else {
		struct node *temp = head;
		struct node *temp2 = head;
		while(temp->link != NULL) {
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return head;
}









int main() {
	head = del_last(head);
	ptr = head;
	while(ptr != NULL) {
		printf("%d", ptr->data);
		ptr = ptr->link;
	} 
	return 0;
	
}
