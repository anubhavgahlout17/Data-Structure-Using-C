#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front,rear;
    int *arr;
};

void enqueue(struct queue *q,int val){
    if ((q->rear+1)%q->size == q->front)
    {
        printf("Queue Overflow");
        return;
    }
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q){
    int val = -1;
    if (q->front == q->rear)
    {
        printf("Queue is Underflow");
    }
    else
    {
        q->front = (q->front+1)%q->size;
        val = q->arr[q->front];
    }
    return val;
}
int main(){
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 10;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size*sizeof(int ));
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    printf("%d is dequeue\n",dequeue(q));
    printf("%d is dequeue\n",dequeue(q));
    printf("%d is dequeue\n",dequeue(q));
    return 0;
}
