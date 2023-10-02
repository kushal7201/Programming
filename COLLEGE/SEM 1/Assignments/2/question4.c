#include<stdio.h>
int main()
{
int int_num1, int_num2;
double num1, num2;
printf("Enter integer number1 and number2: ");
scanf("%d %d", &int_num1, &int_num2);
printf("Enter decimal number1 and number2: ");
scanf("%lf %lf", &num1, &num2);
printf("Your entered integer numbers are: %3d %3d\n", int_num1, int_num2);
printf("Your entered decimal numbers are: %3.3lf %3.3lf\n", num1, num2);
return 0;

}
