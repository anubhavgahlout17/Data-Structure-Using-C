#include<stdio.h>
#include<stdlib.h>

struct node
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

struct node *deletion_at_index(struct node *head,int index){
    struct node *p = head;
    
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
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
    fourth->next = NULL;

    head = deletion_at_index(head,1);
    linked_list_traversal(head);


    return 0;
}