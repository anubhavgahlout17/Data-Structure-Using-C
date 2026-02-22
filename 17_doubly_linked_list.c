#include<stdio.h>
#include<stdlib.h>

struct node           
{
    int data;
    struct node *next;
    struct node *prv;
};

//forward traversal
void linked_list_traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }   
}

//backward traversal
void _doubly_linked_list_traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->prv;
    }   
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