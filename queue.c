#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int f;
int r;
int*arr;
};
int isEmpty(struct queue*q){
    if(q->r==q->f){
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("this queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqued element:%d\n",val);
    }
}
int dequeue(struct queue*q){
    int a=-1;
    if(isEmpty(q)){
        printf("This queue is empty\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
        return a;
    }
}
int main(){
    struct queue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    //enqueue few element
    enqueue(&q,12);
    enqueue(&q,14);
    enqueue(&q,13);
    enqueue(&q,2);
    enqueue(&q,92);
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    enqueue(&q,45);
    enqueue(&q,45);
    enqueue(&q,45);
    if(isEmpty(&q)){
        printf("queue is empty\n");
    }
    if(isFull(&q)){
        printf("queue is full\n");
    }
    return 0;

}