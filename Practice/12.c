#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head){
    while (head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

struct node *deletion_given_value(struct node *head,int value){
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

head->data = 47;
head->next = second;

second->data = 58;
second->next = third;

third->data = 60;
third->next = fourth;

fourth->data = 67;
fourth->next = NULL;

head = deletion_given_value(head,58);
display(head);
return 0;
}
