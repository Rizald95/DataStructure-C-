//addition of two numbers using linked list - part 1
//represent an n-digit number using a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

struct node* add_node(struct node* head, int val)
{
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = val;
	newNode->link = NULL;
	
	newNode->link = head;
	head = newNode;
	return head;
}

struct node* createLL(struct node* head, int n)
{
	while(n != o)
	{
		head = add_note(head, n%10);
		n = n/10;
	}
	
	return head;
}

void print(struct node* head)
{
	struct node* temp = head;
	if(head == NULL)
	{
		printf("no number.");
	}
	else {
		while(temp->link != NULL)
		{
			printf("%d -> ", temp->data);
			temp = temp->link;
		}
		printf("%d", temp->data);
	}
}

int main()
{
	int a, b;
	printf("enter the two numbers: ");
	scanf("%d %d ", &a, &b);
	
	printf("Linked list representation of first number: \n");
	struct node* head1 = NULL;
	head1 = createLL(head1, a);
	print(head1);
	
	struct node* head2 = NULL;
	printf("\nLinked List representation of second number: \n ");
	head2 = createLL(head2, b);
	print(head2);
	
	return 0;
	
	
}


