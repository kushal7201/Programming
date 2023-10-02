#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    int arr[num];
    for(int i =0; i<num;i++) scanf("%d",&arr[i]);
    //Bubble sort:
    int counter = 1;
    while(counter<num){
    for(int i=0; i<num-counter;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    counter++;
    }
    for(int i =0; i<num; i++) printf("%d ",arr[i]);
    return 0;
}