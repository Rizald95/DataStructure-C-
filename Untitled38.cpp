//doubly linked list: deleting the first node of the list

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

struct node* addToEmpty(struct node* head, int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtEnd(struct node* head, int data) {
    struct node* temp, *tp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while (tp->next != NULL) {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}

struct node* delFirst(struct node* head) {
    struct node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

void print(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL;
    head = addToEmpty(head, 34);
    head = addAtEnd(head, 45);
    head = addAtEnd(head, 9);

    printf("after deletion: \n");
    head = delFirst(head);
    print(head);
    
    return 0;
}

