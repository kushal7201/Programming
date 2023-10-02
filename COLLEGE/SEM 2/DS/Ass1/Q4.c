#include <stdio.h>

int main()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d", &num);
    int arr1[num], arr2[num];
    printf("Enter the elements of 1st array: ");
    for (int i = 0; i < num; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the elements of 2nd array: ");
    for (int i = 0; i < num; i++)
        scanf("%d", &arr2[i]);
    printf("1st and 2nd arrays before:\n");
    for (int i = 0; i < num; i++)
        printf("%d ", arr1[i]);
        printf("\n");
    for (int i = 0; i < num; i++)
        printf("%d ", arr2[i]);
    for (int i = 0; i < num; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("\n1st and 2nd arrays after:\n");
    for (int i = 0; i < num; i++)
        printf("%d ", arr1[i]);
        printf("\n");
    for (int i = 0; i < num; i++)
        printf("%d ", arr2[i]);
    return 0;
}