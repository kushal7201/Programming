
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * 2 * n);
    for (int i = n; i <= 2 * n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = (arr[2 * i] > arr[2 * i + 1]) ? arr[2 * i] : arr[2 * i + 1];
    }
    printf("\n");
    printf("Sorted Array: ");
    printf("----------------------\n");
    printf("%d ",arr[1]);
    for (int i = 0; i < n-1; i++)
    {
        int max = arr[1];
        arr[1] = -1;
        int i = 1;
        for (i = 1; i < 2 * n;)
        {
            if (arr[2 * i] == max)
            {
                arr[2 * i] = -1;
                i = 2 * i;
                // printf("%d %d\n",i,2*i);
            }
            else
            {
                arr[2 * i + 1] = -1;
                i = 2 * i + 1;
                // printf("%d %d\n",i,2*i);
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            arr[i] = (arr[2 * i] > arr[2 * i + 1]) ? arr[2 * i] : arr[2 * i + 1];
        }
        printf("%d ", arr[1]);
    }
    printf("\n----------------------");

    return 0;
}
