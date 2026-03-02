#include <stdio.h>
#include <stdlib.h>

struct node                    //Insertion at End : Linked List
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertion_at_end(struct node *head,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = 99;
    while (p->next != NULL)
    {
        p = p->next;

    }
    ptr->next = NULL;
    p->next = ptr;

    return head;
    
}

int main()
{
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
    fourth->next = NULL;

    head = insertion_at_end(head,2);
    linked_list_traversal(head);

    return 0;
}