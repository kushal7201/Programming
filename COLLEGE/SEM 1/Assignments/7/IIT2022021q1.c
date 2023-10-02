#include<stdio.h>


int func(int num)
{
	int num1 = num;
	static int sum = 0;
	if(num1==0) return sum;
	else 
	{
		sum+=num1%10;
		num1/=10;
		return func(num1);
	}
}

int main()
{
	int num; 
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Sum of digits is: %d",func(num));
}
