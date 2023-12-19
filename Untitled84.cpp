//program 5: palindrom

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
} *top = NULL;

int isEmpty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
		
}

void push(int data)
{
	struct node* newNode;
	newNode = malloc(sizeof(newNode));
	//checking if memory cant be allocated for some reason
	if(newNode == NULL)
	{
		printf("stack overflow");
		exit(1);
	}
	newNode->data = data;
	newNode->link = NULL;
	
	newNode->link = top;
	top = newNode;
	
}

int pop()
{
	struct node* temp;
	int val;
	if(isEmpty())
	{
		printf("stack underflow.");
		exit(1);
	}
	temp = top;
	val = temp->data;
	top = top->link;
	free(temp);
	temp = NULL;
	return val;
	
}


int peek()
{
	if(isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	return top->data;
}

void palindrom_check(char* s)
{
	int i = 0;
	while(s[i] != 'X') {
		push(s[i]);
		i++;
	}
	i++;
	while(s[i]) {
		if(isEmpty() || s[i] != pop()) {
			printf("not a palindrom");
			exit(1);
		}
		i++;
	}
	printf("Palindrom");
}


int main()
{
	char s[100];
	printf("please enter the string: ");
	scanf("%s", s);
	
	palindrome_check(s);
	return 0;
	
}
