#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;   
    struct node *next;
};

void display(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }   
}

struct node *atfirst(struct node *head){
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    ptr->data = 1;

    ptr->next = head;

    return ptr;

}

struct node *atmid(struct node *head,int index){
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    struct node *p = head;
    ptr->data = 100;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

struct node *atend(struct node *head){
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    struct node *p = head;
    ptr->data = 999;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = NULL;
    p->next = ptr;
    return head;
}

struct node *afternode(struct node *head,struct node *prvnode){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = 17;
    ptr->next = prvnode->next;
    prvnode->next = ptr;
    return head;
    
}

int main(){
 
          struct node *head;
          struct node *second;
          struct node *third;

          head = (struct node *)malloc(sizeof(struct node));
          second = (struct node *)malloc(sizeof(struct node));
          third = (struct node *)malloc(sizeof(struct node));


          head->data = 7;
          head->next = second;

          second->data = 14;
          second->next = third;

          third->data = 21;
          third->next = NULL;

     head = afternode(head,second);

    display(head);


    return 0;
}