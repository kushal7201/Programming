#include<stdio.h>

void swap(int*x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int size, num;
    printf("Enter size: ");
    scanf("%d",&size);
    int max, n_max;
    scanf("%d %d",&max, &n_max);
    if(max<n_max) swap(&max, &n_max);
    for(int i =1; i<=size-2; i++){
        scanf("%d",&num);
        if(num>max){
            n_max = max;
            max = num;
        }
        else if(num>n_max)
            n_max = num;
    }
    printf("Max: %d\nNext_Max: %d",max, n_max);
    return 0;
}