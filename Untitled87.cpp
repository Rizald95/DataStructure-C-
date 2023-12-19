//Application of stacks: Infix to Postfix - part 8


//Algoruthms :
//scan the symbols of the given postfix expression from left to right and for each symbol, do the following:
// 1. if symbol is an operand, push it on the stack
//2. if symbol is an operator, pop two symbols out of the stack and apply the operator on these symbols,
//, push the result on the stack
//3. after scanning all the symbols of the postfix expression, pop the remaining symbol out of the stack and print it on the screen.
//the remaining symbol is the result obtained after evaluatung the postfix expression.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int stack[MAX];	//changed
char infix[MAX]; postfix[MAX];
int top = -1;

void push(int);	//changed
int pop();	//changed
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);
int post_eval();

int main()
{
	int result;
	printf("enter the infix expression: ");
	gets(infix);
	
	inToPost();
	result = post_eval();
	print();
	printf("the result obtained after postfix evaluation is: ");
	printf("%d\n", result);
	return 0;
	
}

void inToPost()
{
	int i, j = 0;
	char next;
	char symbol;
	for(i=0; i<strlen(infix); i++) {
		symbol = infix[i];
		//if symbol is not a whitespace
		if(!space(symbol))
		{
			switch(symbol)
			{
				case '(':
					push(symbol);
					break;
				case ')':
					while((next=pop()) != '(')
						postfix[j++] = next;
					break;
				
				case '+':
					
				case '-':
				
				case '*':
					
				case '/':
				
				case '^':
					while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
						postfix[j++] = pop();
					push(symbol); break;
				default:
					postfix[j++] = symbol;
					
			}
		}
		
	
	}
	while(!isEmpty())
			postfix[j++] = pop();
		postfix[j] = '\0';
}

int precedence(char symbol)
{
	switch(symbol)
	{
		//higher value means greater precedence
		case '^':
			return 3;
		case '/':
		case '*':
			return 2;
		case '+':
		case '-':
			return 1;
		default:
			return 0;
			
	}
}


void print()
{
	int = 0;
	printf(" the equivalent postfix expression is: ");
	while(postfix[i]) {
		printf("%c", postfix[i++]);
	}
	printf("\n");
}



void push(int val)
{
	if(top == MAX - 1)
	{
		printf("stack overflow\n");
		return;	//indicates the end of the function
	}
	top++;
	stack[top] = val;
	
}


int pop()
{
	int val;
	if(top == -1)
	{
		printf("stack underflow\n");
		exit(1);
	}
	val = stack[top];
	top = top -1;
	return val;
	
}

int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

int power(int a, int b)
{
	int i, mult=1;
	for(i=0; i<b; i++)
		mult *= a;
	return mult;
}

int post_eval()
{
	int i;
	int a, b;
	for(i=0; i<strlen(postfix); i++) {
		// if the symbol is an operand
		if(postfix[i] >= '0' && postfix[i] <= '9') {
			push(postfix[i] - '0');
		} else {
			//pop the topmost symbols
			a = pop();
			b = pop();
			
			switch(postfix[i]) {
				case '+':
					push(b+a);
					break;
				case '-':
					push(b-a);
					break;
				case '*':
					push(b*a);
					break;
				case '/':
					push(b/a);
					break;
				case '^':
					push(pow(b, a));
					break;
					
			}
		}
	}
	return pop();
	
}
