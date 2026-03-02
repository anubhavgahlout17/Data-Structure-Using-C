#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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

int pop(struct Stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack is Underflow\n");
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;

        return val;
    }
}

int main()
{

    struct Stack *s;

    s->size = 4;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 90);
    push(s, 85);
    push(s, 97);
    push(s, 71);
    
    printf("Popped %d from the Stack\n",pop(s));
    printf("Popped %d from the Stack\n",pop(s));

    return 0;
}
