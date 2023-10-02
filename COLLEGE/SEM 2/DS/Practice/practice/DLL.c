#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;
    }
}

void delete(int data)
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        while(temp->data != data)
        {
            temp = temp->next;
        }

        if(temp->prev == NULL)
        {
            head = temp->next;
            head->prev = NULL;
        }
        else if(temp->next == NULL)
        {
            temp->prev->next = NULL;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
    }
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}



int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        int value;
        scanf("%d",&value);
        insert(value);
    }
    display();

    return 0;
}

