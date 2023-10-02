#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *link;
} list;

int main() {
    int num;
    printf("Enter size: ");
    scanf("%d", &num);
    list *head = NULL, *temp = NULL;
    for (int i = 0; i < num; i++) {
        if (i == 0) {
            head = malloc(sizeof(list));
            temp = head;
        } else {
            temp->link = malloc(sizeof(list));
            temp = temp->link;
            temp->link = NULL;
        }
        scanf("%d", &(temp->data));
    }

    int value;
    printf("\nEnter value: ");
    scanf("%d", &value);
    temp = head;
    int flag =0;
    while (temp != NULL) {  
        if (temp->data == value) {
            int t = temp->data;
            temp->data = head->data;
            head->data = t;
            flag = 1;
        } 
        temp = temp->link;
    }
    temp = head;
    if(flag ==0) printf("Not Found!\a\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    return 0;
}
