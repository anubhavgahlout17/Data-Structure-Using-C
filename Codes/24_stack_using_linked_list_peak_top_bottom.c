#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void display(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int isFull(){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *ptr,int val){
    if (isFull())
    {
        printf("Stack is Overflow");
    }

    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = val;
        p->next = ptr;
        ptr = p;
        return p; 
    }
}

int peak(struct node *ptr,int pos){
    struct node *p = ptr;
    for (int i = 0; i < pos-1 && p!=NULL; i++)
    {
               p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }
    else
    {
       return -1;   
    }
     
}

int main(){
    struct node *top = NULL;
    top = push(top,45);
    top = push(top,5);
    top = push(top,75);
    top = push(top,75);
    top = push(top,96);
    display(top);
    
    for (int i = 1; i <= 5; i++)
    {
         printf("value at postion %d is: %d\n",i,peak(top,i));
    }
    
   
    

    return 0;

}
