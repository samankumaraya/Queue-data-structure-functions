#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
   int count;
   int front;
   int rear;
   int qu[20];
}Queue;

void ini_queue(Queue *q){
   q->count=0;
   q->front=-1;
   q->rear=-1;
}
void insert(Queue *q, int x){
 q->rear++;
 q->qu[q->rear]=x;
 q->count++;
}

int remove(Queue *q){
    int result;
    result=q->qu[q->front];
    q->front++;
    q->count--;
    return result;

}
