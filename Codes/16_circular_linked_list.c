#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *head){
    struct node *ptr = head;
    do
    {   
        printf("%d ",ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertion_at_first(struct node *head){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = 2;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
struct node *insertion_at_index(struct node *head,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    ptr->data = 255;
    while (i != index-1 )
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
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
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 37;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = head;

    head = insertion_at_index(head,2);
    linked_list_traversal(head);


    return 0;

}
