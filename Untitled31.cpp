//the following c function takes a singly-linked list as input
//argument. it modifies the list by moving the last element to the front of the list
//and returns the modified list. some part of the code is left blank

typedef struct node {
	int value;
	struct node *next;
}node;

node *move_to_front(node *head) {
	node *p, *q;
	if((head == NULL || (head->next == NULL)))
		return head;
	q = NULL; p = head;
	while (p->next != NULL) {
		q = p;
		p = p->next;
	}
	q->next = NULL; 
	p->next = head;
	head = p;
	return head;
}
