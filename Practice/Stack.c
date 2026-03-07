#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;

};

void traversal(struct stack *s){
      for (int i = 0; i <= s->top; i++)
      {
        printf("%d ",s->arr[i]);
      }
}


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

int isFull(struct stack *s){
    if (s->top == s->size-1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}

void push(struct stack *s,int element){
    if (isFull(s))
    {
          printf("Stack is Overflow\n");
    }
   
    else
    {
          s->top++;
        s->arr[s->top] = element;
    }
}

int pop(struct stack *s){

    if (isEmpty(s))
    {
       printf("Stack is Underflow so can't Pop\n");
       return 1;
    }
    else
    {
        int ele = s->arr[s->top];
        s->top--;
        return ele;
    }
}

int peak(struct stack *s,int index){
    int arr_index = s->top-index+1;

    if (arr_index < 0 || arr_index > s->top)
    {
           printf("Invalid Position\n");
           return -1;
    }
    
    return s->arr[arr_index];
}
    
int main(){
   struct stack *s = (struct stack *)malloc(sizeof(struct stack));
   s->size = 6;
   s->top = -1;
   s->arr = (int *)malloc(s->size*sizeof(int));
   
   s->arr[0] = 5;
   s->top++;
   s->arr[1] = 4;
   s->top++;
   s->arr[2] = 3;
   s->top++;
   s->arr[3] = 2 ;
   s->top++;
   s->arr[4] = 45 ;
   s->top++;
    
//   printf("Stack Before Pop up: \n");
//   traversal(s);

//   printf("\n%d pop up from the Stack\n",pop(s));
//   printf("Stack After Pop up: \n");
//   traversal(s);

for (int i = 1; i <= s->top+1; i++)
{
    printf("%d position of element: %d\n",i,peak(s,i));
}

  return 0;
}