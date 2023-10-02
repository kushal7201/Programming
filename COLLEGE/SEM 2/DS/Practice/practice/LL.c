#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node* next;
} list;

list* createnode(int valieu){
    list* new = (list*)malloc(sizeof(list));
    new->data= valieu;
    new->next = NULL;
    return new;
}

list* inseert(list* head, int value){
    list* new = createnode(value);
    if(head == NULL){
        head = new;
    }
    else{
        list* p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = new;
    }
    return head;
}

void traverse(list* head){
    list* p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    list* head = NULL;
    for(int i = 0; i < num; i++){
        int value;
        scanf("%d",&value);
        head = inseert(head,value);
    }
    traverse(head);
    return 0;
}