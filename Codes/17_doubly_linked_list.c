#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prv;
};

// forward traversal
void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// backward traversal
void _doubly_linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prv;
    }
}

struct node *insertion_at_first(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->prv = NULL;
    ptr->data = 14;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node *deletion_at_first(struct node *head)
{
    struct node *p = head;
    head = p->next;
    head->prv = NULL;
    free(p);
    return head;
}

struct node *insertion_at_end(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 100;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *deletion_at_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        q = q->next;
        p = p->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

struct node *insertion_at_pos(struct node *head, int pos)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = 100;
    int i = 0;
    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    ptr->prv = p;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *deletion_at_pos(struct node *head, int pos)
{
    struct node *p = head;
    struct node *q = head->next;

    int i = 0;
    while (i != pos - 1)
    {
        q = q->next;
        p = p->next;
        i++;
    }
    p->next = q->next;

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

    head->prv = NULL;
    head->data = 7;
    head->next = second;

    second->prv = head;
    second->data = 25;
    second->next = third;

    third->prv = second;
    third->data = 37;
    third->next = fourth;

    fourth->prv = third;
    fourth->data = 40;
    fourth->next = NULL;

    linked_list_traversal(head);
    printf("\n");
    doubly_linked_list_traversal(fourth);

    return 0;
}