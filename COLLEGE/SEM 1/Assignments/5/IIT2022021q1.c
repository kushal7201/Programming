#include <stdio.h>
int main()
{
    int arr[20], flag = 0, num, size;
    printf("Size of array? ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d position element: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("True\n");
    else
        printf("False\n");
}
