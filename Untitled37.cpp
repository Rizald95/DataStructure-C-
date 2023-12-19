//creating an entire list
//logic is simple
//we will add the first node using addAtEmpty function
//then we will add the subsequent nodes using addAtEnd function

#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	int data;
	struct node* next;
};

int main() {
	struct node* head = NULL;
	struct node* ptr;
	head = createList(head);
	
	ptr = head;
	while(ptr != NULL) {
		printf("%d", ptr->data);
		ptr = ptr->next;
	}
	return 0;
}

struct node* createList(struct node* head) {
	int n, data, i;
	printf("enter the number of nodes: ");
	scanf("%d", &n);
	
	if(n == 0)
		return head;
	
	printf("enter the element for the node 1: ");
	scanf("%d", &data);
	
	head = addToEmpty(head, data);
	
	for(i=1; i<n; i++) {
		printf("enter the element for the node %d: ", i+1);
		scanf("%d", &data);
	}
	return head;
	
}
