#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAX 100

// USING ARRAYS:

struct lifo
{
    int arr[MAX];
    int top;
};
typedef struct lifo stack;

void create(stack* s){
    s->top=-1;
}

void push(stack* s, int element){
    if(s->top==MAX-1){
        printf("Stack Overflow!");
        exit(-1);
    }
    else{
        s->top++;
        s->arr[s->top] = element;
    }
}

int pop(stack* s){
    if(s->top==-1){
        printf("Stack Underdflow!");
        exit(-1);
    }
    else return s->arr[s->top--];
}

int isFull(stack* s){
    if(s->top==MAX-1) return 1;
    else return 0;
}

int isEmpty(stack* s){
    if(s->top==-1) return 1;
    else return 0;
}
int top(stack s){
    if(s.top==-1){
        printf("Stack is Empty!");
        exit(-1);
    }
    else return s.arr[s.top];
}

//USING LINKED LISTS:

// struct lifo
// {
//     int value;
//     struct lifo *next;

// };
// typedef struct lifo stack;

// void create(stack** top){
//     *top = NULL;
// }

// void push(stack** top, int element){
//     stack *new;
//     new = (stack*)malloc(sizeof(stack));
//     if(new==NULL){
//         printf("Stack is Full!");
//         exit(-1);
//     }
//     else{
//         new->value= element;
//         new->next= *top;
//         *top = new;
//     }
// }

// int pop(stack **top){
//     int element;
//     stack *p;
//     if(*top==NULL){
//         printf("Stack is Full!");
//         exit(-1);
//     }
//     else{
//         element = (*top)->value;
//         p = *top;
//         *top = (*top)->next;
//         free(p);
//         return element;
//     }
// }

// int isEmpty(stack *top){
//     if(top==NULL) return 1;
//     else return 0; 
// }

int main()
{
    stack *A, *B;
    create(&A); create(&B);
    push(&A,12); push(&B,21);
    printf("A = %d, B = %d\n",pop(&A),pop(&B));
    printf("%d\n", isEmpty(B));
    // printf("%d", isFull(&B));
    return 0;
}