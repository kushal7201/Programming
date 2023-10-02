#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t, b, n;
    printf("Enter the length of binary number: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter a binary number(separate each integer by a space): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1 && a[i] != 0)
        {
            printf("Invalid input\n");
            exit(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            a[i] = 0;
        else
            a[i] = 1;
    }
    int flag = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            flag = 1;
            a[i] = 1;
            for (int j = 0; j <= i; j++)
            {
                printf("%d", a[j]);
            }
            for (int k = i + 1; k < n; k++)
            {
                a[i] = 0;
                printf("%d", a[i]);
            }
            printf("\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("1");
        for (int i = 0; i < n; i++)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}