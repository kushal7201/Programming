#include <stdio.h>
#include <stdlib.h>

typedef struct linkdl
{
    int data;
    struct linkdl *next;
} var;

var *deleteAtfirst(var *head)  // it will delete the first node of the linked list
{
    if (head == NULL || head->next == NULL)
        return NULL;

    var *del = head;
    head = head->next;
    free(del);
    return head;
}

var *insertAtTail(var *head, int element)  // it will insert a new node with given element at the end of the linked list
{
    var *newNode = (var *)malloc(sizeof(var));
    newNode->data = element;
    newNode->next = NULL;
    if (head == NULL)
        return newNode;

    var *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void prntll(var *head)  // it will print the elements of the linked list
{
    var *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    var *head = NULL;
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 11);
    head = insertAtTail(head, 12);
    head = insertAtTail(head, 13);
    prntll(head);
    head = deleteAtfirst(head);
    head = deleteAtfirst(head);
    prntll(head);
}