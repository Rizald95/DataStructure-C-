//the following c function takes a single-linked list of integers as a parameter
//and rearranges the elements of the list. the functioon is called with the list
//containing the integers 1,2,3,4,5,6,7 in the given order. what will be the contents
//of the list after function completes execution?

struct node {
	int value;
	struct node *next;
};

void rearrange(struct node *list) {
	struct node *p, *q;
	int temp;
	if (!list || !list->next) return;	//!list is equivalent to list == NULL
										//!list->next is equivalent to list->next == NULL
	p = list; q = list ->next;
	while(q) {
		temp = p->value;				
		p->value = q->value;
		q->value = temp;
		p = q ->next;
		q = p? p->next : 0;
	}
}


//q = p?p->next : 0 is equivalent to
//q = p!=NULL ? p->next : 0
	//OR
//if(p!=NULL)
// q = p->next;
//else
//q = 0

//output = 2,1,4,3,6,5,7
