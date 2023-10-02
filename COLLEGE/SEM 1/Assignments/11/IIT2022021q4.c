#include <stdio.h>
#include <stdlib.h>

typedef struct linkdl{
    int data;
    struct linkdl* next;
} var;

int main(){
    var* head = (var*) malloc(sizeof(var));
    var* tail = head;
    head->data = 1;
    head->next = NULL;
    int i = 2;
    var* temp;
    while (i <= 10){
        temp = (var*) malloc(sizeof(var));
        temp->data = i;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
        i++;
    }
    printf("The required linked list: \n");
    temp = head;
    while (temp->next != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    return 0;
}