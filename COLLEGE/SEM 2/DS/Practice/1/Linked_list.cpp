#include<bits/stdc++.h>
using namespace std;
struct student{
    int data;
    struct student *next;
};

typedef struct student stu;

void print(stu*head){
    stu*p= head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }}

int main()
{
    int num;
    cout<<"Enter the size: ";
    cin>>num;
    stu*temp, *head;
    for(int i =0; i<num; i++)
    {
        if(i==0){
            head = (stu*)malloc(sizeof(stu));
            temp = head;
        }
        else {
            temp->next= (stu*)malloc(sizeof(stu));
            temp = temp->next;
        }
        scanf("%d",&temp->data);
        temp->next=NULL;
    }
    print(head);


    return 0;
}