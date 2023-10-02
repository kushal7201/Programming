#include<stdio.h>

void insertion_sort(int a[], int n)
{
    for(int i =1; i<n; i++)
    {
        int current = a[i], j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=current;
    }
    //return a;
    //for(int i =0;i<n;i++) printf("%d ",a[i]);
}

int main()
{
    int num;
    printf("ENter the size: ");
    scanf("%d",&num);
    int arr[num];
    for(int i =0; i<num;i++) scanf("%d",&arr[i]);
    insertion_sort(arr,num);
    for(int i =0; i<num; i++) printf("%d ",arr[i]);
    return 0;
}