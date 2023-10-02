#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int flag = 0;
int finder(int a, int b)
{
	if(a==b) flag =1;
}

int main()
{
	int num;
	srand(time(0));
	int array[100];
	for (int i = 0; i < 100; i++) array[i] = rand()%100 + 1; // This will generate an array of size 100 with random numbers from 1 to 100.
	printf("Enter an integer: ");
	scanf("%d",&num);
	printf("\nThe generated list is as follows:\n");
	for (int i = 0; i < 100; i++) printf("%d ",array[i]);
	for(int i = 0; i<100; i++)
	{
		finder(array[i], num);
		if(flag==1)
		{
			printf("\n\nThe number you entered is available at %d position.",i);
			break;
		}
	}
	if(flag==0) printf("\n\nThe number you entered is not available in the list.");

}
