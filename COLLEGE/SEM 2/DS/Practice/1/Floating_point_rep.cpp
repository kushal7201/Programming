#include <stdio.h>

void printBits(unsigned int a)
{
    static int flag = 0;
    if (flag != 32)
    {
        ++flag;
        printBits(a / 2);
        printf("%d ", a % 2);
        --flag;
        if (flag == 31 || flag == 23)
            printf(" ");
    }
}

void printFloatBits(float x)
{
    unsigned int *iP = (unsigned int *)&x;
    printBits(*iP);
}

int main() // floatBits.c
{
    float x;
    printf("Enter a floating-point numbers: ");
    scanf("%f", &x);
    printf("Bits of %f are:\n", x);
    printFloatBits(x);
    printf("\n");
    return 0;
}
