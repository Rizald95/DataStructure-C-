
//deleting the node at particular position

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void del_pos(struct node **head, int position) {
	struct node *current = *head;
	struct node *previous = *head;
	if(*head == NULL)
		printf("list is already empty!");
	else if(position == 1) {
		*head = current->link;
		free(current);
		current = NULL;
	}
	
	else {
		while(position != 1) {
			previous = current;
			current = current->link;
			position--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
}




int main() {
	int position = 2;
	del_pos(&head, position);
	ptr = head;
	while(ptr != NULL) {
		printf("%d", ptr->data);
		ptr = ptr->link;
	}
	return 0;
}
