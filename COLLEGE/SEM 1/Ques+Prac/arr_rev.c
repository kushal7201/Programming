#include <stdio.h>
void arrRev(int *arr, int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }
}

int main()
{
    int num;
    printf("Size of array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
        scanf("%d", arr + i);
    printf("Array entered by user: \n");
    for (int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    printf("\nArray after the reversal: \n");
    arrRev(arr, num);
    for (int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
}