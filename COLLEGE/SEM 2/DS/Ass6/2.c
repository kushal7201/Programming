#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int arr[100];
    for(int i =0; i<100; i++)
    arr[i] = rand()%100;
    int a1[100] = {0};
    // for(int i =0; i<100; i++)
    // a1[i] = 0;
    for(int i =0; i<100; i++){
        a1[arr[i]]++;
    }
    for(int i =0; i<100; i++){
        while(a1[i]--){
            printf("%d ",i);
        }
    }
    return 0;
}