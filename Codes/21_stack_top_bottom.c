#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct Stack *ptr, int value)
{

    if (isfull(ptr))
    {
        printf("Stack is overflow so %d can't push to the Stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int top(struct Stack *ptr){

    return ptr->arr[ptr->top];
}

int bottom(struct Stack *ptr){

    return ptr->arr[0];
}


int main()
{

    struct Stack *s;

    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 90);
    push(s, 85);
    push(s, 97);
    push(s, 34);
    push(s, 22);
    push(s, 11);
    push(s, 29);
    int top_element = top(s);
    printf("Top element in the stack: %d\n",top_element);
    int bottom_element = bottom(s);
    printf("Bottom element in the stack: %d",bottom(s));
    
    return 0;
}
