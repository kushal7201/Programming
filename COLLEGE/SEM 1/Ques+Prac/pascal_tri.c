#include<stdio.h>
int factorial(unsigned int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int ncr(unsigned int n, unsigned int r)
{
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}

int main()
{
    int num = 7;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i; j++)
        {
            printf("  ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf(" %3d", ncr(i, j));
        }
        printf("\n");
        
        
    }
    return 0;
}
