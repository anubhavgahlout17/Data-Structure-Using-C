#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}


int isEmpty(struct node *ptr){
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *ptr){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *ptr,int element){
   struct node *p = (struct node *)malloc(sizeof(struct node));
   p->data = element;
   if (isFull(ptr))
   {
           printf("Stack is Overflow\n");

   }
   else
   {
        p->next = ptr;
        ptr = p;
        return ptr;
        
   }
}




int main(){

    struct node *top = NULL;
    top = push(top,56);
    top = push(top,5);
    top = push(top,6);
    top = push(top,12);
    traversal(top);
 return 0;
}