#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void push(struct stack *ptr,int value){
    ptr->top++;
    ptr->arr[ptr->top] = value;
}
 
int peak(struct stack *ptr,int i){
    int arrInd = ptr->top-i+1;
    if (arrInd < 0)
    {
        printf("Not a valid Position");
        return -1;
    }

    return ptr->arr[arrInd];
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    push(sp,45);
    push(sp,35);
    push(sp,15);
    push(sp,65);
    push(sp,47);
    push(sp,44);
    push(sp,42);
    push(sp,40);

    for (int i = 1; i <= sp->top+1; i++)
    {
        printf("The value at position %d is %d\n",i,peak(sp,i));
    }
    

    return 0;
}
