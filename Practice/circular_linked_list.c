#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;

    struct node *next;
};

void traversal(struct node *head){
    struct node *p = head;
    do 
    {
        printf("%d ",p->data);
          p = p->next;
    }while(p != head);
}

struct  node *insertion_at_first(struct node *head){

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = 19;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

struct node *deletion_at_first(struct node *head){
    struct node *p = head->next;
    struct node *q = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = q->next;
    head = q->next;
    free(q);
    return head;
    return 0;
}

struct  node *insertion_at_end(struct node *head){

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = 26;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

struct node *delete_at_end(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != head)
    {
        q = q->next;
        p = p->next;
    }
    p->next = head;
    free(q);
    return head;
}
int main(){

    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));


    head->data = 56;
    head->next = second;

    second->data = 78;
    second->next = third;

    third->data = 99;
    third->next = head;

    // head = insertion_at_first(head);
    // head = deletion_at_first(head);
    // head = delete_at_end(head);
    head = insertion_at_end(head);
    traversal(head);
    return 0;
}