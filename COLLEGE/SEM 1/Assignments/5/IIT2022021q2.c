#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[25], size;
    printf("Size of array? ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d position element: ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d position element: ", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = size, j = 0; i < 2 * size; i++, j++)
    {
        arr3[i] = arr2[j];
    }
    for (int i = 0; i < 2 * size; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
