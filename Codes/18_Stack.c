#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int emptyStack(struct Stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fullStack(struct Stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int main (){

    struct Stack *s;

    s->size = 4;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));

    s->arr[0] = 56;
    s->top++;
     s->arr[0] = 56;
    s->top++;
     s->arr[0] = 56;
    s->top++;
   

    
    if (emptyStack(s))
    {
        printf("Stack is empty");
    }
   if (fullStack(s))
   {
    printf("Stack is FUll");
   }
   else
   {
    printf("Stack is not full");
   }
   
   
    
    
    
    return 0;
}
