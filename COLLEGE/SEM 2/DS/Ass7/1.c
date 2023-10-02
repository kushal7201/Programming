#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int arr[], int n, int r, int index)
{
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int i = index; i < n; i++)
    {
        swap(&arr[index], &arr[i]);
        permute(arr, n, r, index + 1);
        swap(&arr[index], &arr[i]);
    }
}

int main()
{
    int n, r;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    printf("Permutations of the array elements taken %d at a time:\n", r);
    permute(arr, n, r, 0);

    return 0;
}