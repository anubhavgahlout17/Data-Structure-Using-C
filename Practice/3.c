#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;    
};

void  traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

struct node *InsAtfirst(struct node *head){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 10;
    ptr->next = head;
    return ptr;
}

struct node *InsAtmid(struct node *head,int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    ptr->data = 55;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
   
    return head;   
}

struct node *InsAtend(struct node *head){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
       ptr->data = 99;
        
       while (p->next != NULL)
       { 
        p= p->next;
        
       }
        ptr->next = NULL;
         p->next = ptr;
       
        return head;
    
}


int main(){
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;

     head = (struct node *)malloc(sizeof(struct node));
     second= (struct node *)malloc(sizeof(struct node));
     third = (struct node *)malloc(sizeof(struct node));
     fourth = (struct node *)malloc(sizeof(struct node));

     head->data = 14;
     head->next = second;

     second->data = 45;
     second->next = third;

     third->data = 52;
     third->next = fourth;

     fourth->data = 69;
     fourth->next = NULL;
     head = InsAtfirst(head);
     head = InsAtmid(head,4);
     head = InsAtend(head);
     traversal(head);

    return 0;
}