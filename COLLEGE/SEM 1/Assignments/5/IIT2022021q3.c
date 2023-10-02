#include <stdio.h>
int main()
{
    int arr[20], size, arr1[50];
    printf("Size of array? ");
    scanf("%d", &size);
    for (int i = 0; i < 50; i++)
    {
        arr1[i] = 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d position element: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                arr1[i] += 1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d occurs %d times\n", arr[i], arr1[i]);
    }
}
