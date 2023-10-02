#include <stdio.h>
#include <math.h>

float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("\aDivide by zero error!");
        return 0.0;
    }
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    float num1, num2;
    char op;
    while (1)
    {
        printf("Enter 1st number: ");
        scanf("%f", &num1);
        printf("Enter the operator(+,-,*,/,^)\npress q for exit.\nEnter here: ");
        scanf(" %c", &op);
        if (op == 'q')
            goto end;
        printf("Enter 2nd number: ");
        scanf("%f", &num2);

        printf("\n");
        switch (op)
        {
        case '+':
            printf("%f", sum(num1, num2));
            break;
        case '-':
            printf("%f", sub(num1, num2));
            break;
        case '*':
            printf("%f", mul(num1, num2));
            break;
        case '\\':
            printf("%f", div(num1, num2));
            break;
        case '%':
            printf("%d", mod((int)num1, (int)num2));
            break;
        default:
            goto end;
        }
        printf("\n");
        printf("\n");
    }
end:
    return 0;
}