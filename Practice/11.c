#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void *display(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

struct node *delete_first_node(struct node *head){
    struct node *p = head;
    head = p->next;
    free(p);
    return head;
}

struct node *delete_between(struct node *head,int index){
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

struct node *delete_end_node(struct node *head){
    struct node *p = head;
    struct node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = NULL;
    p->next = NULL;
    free(q);
    return head;

     

}

struct node *delete_after_node(struct node *head,struct node *prvnode){
    struct node *p = head;
    struct node *q = q;
    while (p != prvnode)
    {
        p = p->next;
    }
    q = p->next;
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
          fourth= (struct node *)malloc(sizeof(struct node));


          head->data = 7;
          head->next = second;

          second->data = 14;
          second->next = third;

          third->data = 21;
          third->next = fourth;

          fourth->data = 28;
          fourth->next = NULL;

     
    head = delete_end_node(head);
    display(head);

    return 0;
}
