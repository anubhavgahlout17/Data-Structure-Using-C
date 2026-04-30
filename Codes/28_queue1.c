#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void display(struct queue *q){
    for (int i = q->f+1; i <= q->r; i++)
    {
        printf("%d ",q->arr[i]);
    }
}

int isEmpty(struct queue *q){
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
    
}
int isFull(struct queue *q){
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}


void inqueue(struct queue *q,int val){
       if (isFull(q))
       {
         printf("Queue is Overflow");
         return;
       }

       q->r++;
       q->arr[q->r] = val;
}

int dequeue(struct queue *q){
    
    if (isEmpty(q))
    {
        printf("Queue is Underflow");
        return -1;
    }
int val = q->arr[q->f+1];
    q->f++;
return val;
}

int main(){
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    inqueue(&q,10);
    inqueue(&q,20);
    inqueue(&q,30);
    inqueue(&q,40);
    printf("%d is dequeue\n",dequeue(&q));
    printf("%d is dequeue\n",dequeue(&q));
    printf("%d is dequeue\n",dequeue(&q));
    display(&q);
    return 0;
}
