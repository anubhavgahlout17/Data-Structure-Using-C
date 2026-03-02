#include<stdio.h>
#include<stdlib.h>

struct node                                                  // Without Globl Variable
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

int isEmpty(struct node *ptr){
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct node *ptr){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *ptr,int val){
    if (isFull(ptr))
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

int pop(struct node **ptr){
    
    if (isEmpty(*ptr))
    {
        printf("Stack is Underflow ");
    }
    else
    {
        struct node *p = *ptr;
        *ptr = (*ptr)->next;
        int q = p->data;
        free(p);
        return q;
    }
    
}




int main (){

    struct node *top = NULL;

    top = push(top,14);
    top = push(top,74);
    top = push(top,63);
    int element = pop(&top);
    printf("Element %d is poped out\n",element);
    display(top);

    return 0;
}