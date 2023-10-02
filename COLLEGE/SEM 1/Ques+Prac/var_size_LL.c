#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *head,*newnode,*temp;
    printf("Enter the size n : ");
    int n;
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of head : ");
    scanf("%d",&head->data);
    temp=head;
    for(int i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element %d : ",i);
        scanf("%d",&newnode->data);
        temp->next=newnode;
        temp=temp->next;
    }
    temp=head;
    for(int i=1;i<=n;i++){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}