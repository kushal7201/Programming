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
    int b1, b2;
    b1 = DtB(12);
    b2 = DtB(15);
    printf("Binary equivalent of 12 is %d\n", b1);
    printf("Binary equivalent of 15 is %d\n", b2);
    int sum = 12 + 15;
    printf("Binary Sum = %d\n", DtB(sum));
    int diff = -12 + 15;
    printf("Binary Diff = -%d\n", DtB(diff));
    return 0;
}
