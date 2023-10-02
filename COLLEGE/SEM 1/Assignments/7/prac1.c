#include <stdio.h>
int search(int list[], int size, int x){
    size--;
    if(size<0)
    return -1;
    else if(list[size]==x)
    return size;
    else return search(list, size, x);
}
int main(){
    int list[100], size, x;
    printf("Enter the no. of integers you will write in the list: ");
    scanf("%d", &size);
    for(int i=0; i<size; i++)
    scanf(" %d", &list[i]);
    printf("Search for an element in the list and code will display its first position of occurence: ");
    scanf("%d", &x);
    if(search(list, size, x)!=-1)
    printf("The first position of occurence of %d is %d\n", x, search(list, size, x));
    else
    printf("The number is not present in the list of numbers you have entered\n");
    return 0;
}