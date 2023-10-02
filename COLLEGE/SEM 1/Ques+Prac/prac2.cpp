#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            count++;
        if (a[i] != a[i + 1])
            count = 1;

        if (count > max)
        {
            max = count;
        }
        count = 1;
    }
    printf("%d", max);
    return 0;
}