#include <stdio.h>
#include <stdlib.h>

struct node // Insertion at First : Linked list
{
    int data;
    struct node *next;
};
void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *reverse(struct node *head){
  
    struct node *prev = NULL;
      struct node *curr = head;
    struct node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
return prev;
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

    head = reverse(head);
    linked_list_traversal(head);
    return 0;
}