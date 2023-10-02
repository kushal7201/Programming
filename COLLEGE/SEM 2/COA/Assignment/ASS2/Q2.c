#include <stdio.h>

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
    int d1, d2, b1, b2;
    printf("Enter the two positive decimal numbers as a,b as a>b: ");
    scanf("%d %d", &d1, &d2);
    b1 = DtB(d1);
    b2 = DtB(d2);
    printf("Binary equivalent of %d is %d\n", d1, b1);
    printf("Binary equivalent of %d is %d\n", d2, b2);
    int sum = d1 + d2;
    printf("Binary Sum = %d\n", DtB(sum));
    int diff = d1 - d2;
    printf("Binary Diff = %d\n", DtB(diff));
    return 0;
}
