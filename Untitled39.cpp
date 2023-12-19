//doubly linked list: deleting the last node of the list
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

struct node* delLast(struct node* head) {
    struct node* temp = head;
    if (temp == NULL) {
        return head;
    }
    if (temp->next == NULL) {
        free(temp);
        head = NULL;
        return head;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
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

    printf("before deletion: \n");
    print(head);

    // delete the last node of the list
    head = delLast(head);
    printf("after deletion: \n");
    print(head);

    return 0;
}




