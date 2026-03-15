#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};


int isFull(struct Queue *q){
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q){
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;

}

void enqueue(struct Queue *q,int val){
    if (isFull(q))
    {
        printf("Queue is Full\n");
    }
    else{
    q->r++;
    q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q){
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else{
    q->f++;
    a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size*sizeof(int));

    enqueue(q,56);
    enqueue(q,12);
    enqueue(q,22);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);


    return 0;
}