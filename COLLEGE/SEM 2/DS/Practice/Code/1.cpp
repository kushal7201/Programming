#include <bits/stdc++.h>
#include <malloc.h>
using namespace std;
struct student
{
    int roll;
    struct student *next;
};

typedef struct student stu;

int main()
{
    int num;
    cout << "Enter the size: ";
    cin >> num;
    stu *temp, *head;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            head = (stu *)malloc(sizeof(stu));
            temp= head;
        }
        else {
            temp->next= (stu*) malloc(sizeof(stu));
            temp = temp->next;
        }
        scanf("%d",&temp->roll);
        temp->next= NULL;
    }
    // temp->next = NULL;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->roll);
        temp = temp->next;
    }
}