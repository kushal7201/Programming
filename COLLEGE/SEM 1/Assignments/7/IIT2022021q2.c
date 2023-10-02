#include <stdio.h>
#include <math.h>

int gif(float a)
{
    if (a >= 0)
        return (int)a;
    else
        return -1 + (int)a;
}

int func(int a)
{
    if (a == 1)
        return 6;
    else if (a > 1)
        return 4 * func(gif(a / 2.0)) + a;
}

int func1(int a)
{
    int m = 1000000007;
    int x = func(pow(2, a)) % m;
    return x;
}

int main()
{
    int num;
    printf("Enter the value of x: ");
    scanf("%d", &num);
    printf("Value of f(%d): %d\n", num, func1(num));
}
