#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[25], num, arr_p[25], arr_n[25];
    printf("How many entries(less than 25): ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d Enter a random integer(except 0): ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = 0, k = 0; i < num; i++)
    {
        printf("Array = %d ", arr[i]);
        if (arr[i] > 0)
        {
            arr[i] = arr_p[j];
            j++;
        }
        else
        {
            arr[i] = arr_n[k];
            k++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    return 0;
}
