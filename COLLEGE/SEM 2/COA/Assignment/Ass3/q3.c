#include <stdio.h>

int ADtB(float n)
{
    int i = 0;
    while(1)
    {
        
        n*=2;
        i+=(int)n;
        if(n==0) break;
        i*=10;
        n = n-(int)n;
    }
    return i;
}

int DtB(int d)
{
    int b = 0, base = 1;
    while (d > 0)
    {
        b += (d % 2) * base;
        d /= 2;
        base *= 10;
    }
    return b;
}

int main()
{
    // float f;
    // printf("Enter a floating number: ");
    // scanf("%f", &f);
    // int n;
    
    float a;
    scanf("%f",&a);
    printf("%d",ADtB(a));

    return 0;
}
