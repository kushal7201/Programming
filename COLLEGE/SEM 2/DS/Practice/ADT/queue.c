#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct fifo
{
    int value;
    struct fifo *next;
};
typedef struct fifo queue;
queue *front, *rear;

void createq(queue**front, queue**rear){
    *front =NULL;
    *rear = NULL;
}

void enqueue(queue**front, queue**rear, int element){
    queue* new;
    new = (queue*)malloc(sizeof(queue));
    if(*rear==NULL){
        *front= new;
        *rear = new;
        new->value = element;
        new->next=NULL;
    }
    else{
        (*rear)->next = new;
        *rear = new;
        new->value = element;
        new->next= NULL;
    }
}

int dequeue(queue**front, queue**rear){
    int element;
    queue*p;
    if(*front=NULL)
        printf("Queue is Empty!");
    else if(*front==*rear){
        element = (*front)->value ;
        free(*front);
        *front= *rear = NULL;
        return element;
    }
    else{
        element = (*front)->value;
        p = *front;
        *front= (*front)->next;
        free(p);
        return element;
    }
}

int isEmpty(queue*front){
    if(front==NULL) return 1;
    else return 0;
}

int main()
{
    queue *F, *R;
    createq(&F,&R);
    enqueue(&F,&R,10);
    enqueue(&F,&R,20);
    enqueue(&F,&R,30);
    printf("%d",F->value);
    return 0;
} 