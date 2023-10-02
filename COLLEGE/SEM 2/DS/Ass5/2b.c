#include <stdio.h>

int main()
{
    int arr[100],i,n;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for (int i = n; i <= 2*n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = (arr[2*i] > arr[2*i + 1]) ? arr[2*i] : arr[2*i + 1];
    }
    printf("\n");
    printf("Sorted Array: ");
    printf("----------------------\n");
    printf("%d ",arr[1]);
    for (int i = 1; i <= n-1; i++)
    {
        int max = arr[1];
        arr[1] = -1;
        int j = 1;
        for (j = 1; j < 2*n;)
        {
            if (arr[2*j] == max)
            {
                arr[2*j] = -1;
                j = 2*j;
            }
            else
            {
                arr[2*j + 1] = -1;
                j = 2*j + 1;
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            arr[i] = (arr[2*i] > arr[2*i + 1]) ? arr[2*i] : arr[2*i + 1];
        }
        printf("%d ", arr[1]);
    }
    printf("\n----------------------");

    return 0;
}