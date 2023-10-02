#include<stdio.h>
#define SIZE 100

typedef struct {
    int key; /* just an example, can have Declaration any type of
                 fields depending on what is to be stored */
} element;

typedef struct {
    element list[SIZE];
    int top;    /* index of the topmost element */
} stack;


int isfull (stack *s)
{
    if (s->top >= SIZE-1) return 1;
    return 0;
}

int isempty (stack *s)
{
    if (s->top == -1) return 1;
    return 0;
}

element top( stack *s )
{
    return s->list[s->top];
}

void push( stack *s, element e )
{
    (s->top)++;
    s->list[s->top] = e;
}

void pop( stack *s )
{
    (s->top)--;
}


int main()
{
    
    stack Z;
    Z.top = -1;
    
    
    
    /* Push elements */
    
    push(&Z,element 10);
    push(&Z,element 20);
    
  
    
    /* Pop the elements and print */
    
    printf("%d %d",pop(&Z),pop(&Z));
   
}