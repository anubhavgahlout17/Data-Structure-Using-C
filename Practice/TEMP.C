#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *s){
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}

void display(struct stack *s){
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ",s->arr[i]);
    }
}

int isFull(struct stack *s){
    if (s->top == s->size-1)
    {
        return 1;
    }
    return 0;
    
}

void push(struct stack *top,int element){
    if (isFull(top))
    {
        printf("Stack is Overflow\n");
    
    }    
     top->top++;
     top->arr[top->top] = element;
}

int pop(struct stack *s){
    if (isEmpty(s))
    {
        return 11;
    }
    else
    {
        int element = s->arr[s->top];
        s->top--;
        return element;
    }      
}

int peak(struct stack *s,int pos){

    int arr_position = s->top-pos+1;
    printf("%d is found at position: %d\n",pos,arr_position);
    return 1;

}
int main(){
    struct stack  *s = (struct stack *)malloc(sizeof(struct stack));
    s->size =  5;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    push(s,56);
    push(s,4);
    push(s,3);
    push(s,2);
    // pop(s);
    // display(s);
    peak(s,3);
   
    
    return 0;
}


