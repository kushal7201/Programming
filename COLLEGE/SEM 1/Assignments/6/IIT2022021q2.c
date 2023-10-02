#include <stdio.h>
#include <math.h>

double power(float a, float b)
{
    return pow((int)a, (int)b);
}

float absolute(float a)
{
    if (a < 0)
        return -a;
    else
        return a;
}

int is_prime(unsigned int a)
{
    if (a == 1)
        return 0;
    else if(a==2) return 1;
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                return 0;
            }
            return 1;
        }
    }
}

int main()
{
int input;
float x, y;
printf("Enter 1st number: ");
scanf("%f",&x);
printf("Enter 2nd number: ");
scanf("%f",&y);
printf("press 1 for power\npress 2 for for absolute of 1st\npress 3 to check if 1st is prime\npress 0 for exit\nEnter here: ");
scanf("%d", &input);
if(input==0) goto end;
printf("\n");
switch(input)
{
case 1: printf("%lf", power(x,y)); break;
case 2: printf("%f", absolute(x)); break;
case 3: printf("%d", is_prime((int)x)); break;
default: goto end;

}
end:
return 0;

}