//doubly linked list: reverse the node from initial state to require state
//value in node prev to node next, dan lain-lain

struct node {
	struct node* prev;
	int data;
	struct node* next;
};

struct node* addToEmpty(struct node* head, int data);
{
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}

struct node* addAtEnd(struct node* head, int data)
{
	struct node* temp, *tp;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	tp = head;
	while(tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return head;
	
}

void print(struct node* head)
{
	struct node* ptr = head;
	while(ptr != NULL)
	{
		printf("%d", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

struct node* reverse(struct node* head)
{
	struct node* ptr1 = head;
	struct node* ptr2 = ptr1->next;
	
	ptr1->next = NULL;
	ptr1->prev = ptr2;
	
	while(ptr2 != NULL)
	{
		ptr2->prev = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->prev;
	}
	
	head = ptr1;
	return head;
	
}


int main()
{
	struct node* head = NULL;
	struct node* ptr;
	head = addToEmpty(head, 34);
	head = addAtEnd(head, 45);
	head = addAtEnd(head, 9);
	
	printf("before reversing the list: \n");
	print(head);
	
	//delete the first node of the list
	head = reverse(head);
	printf("after reversing the list: \n");
	print(head);
	return 0;
	
	
}










