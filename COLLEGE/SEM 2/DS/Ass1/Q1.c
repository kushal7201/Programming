#include<stdio.h>
int main()
{
	// Using ITERATIVE method:
	int num;
	printf("Enter the size of array: ");
	scanf("%d", &num);
	int arr[num];
	for(int i = 0 ; i<num; i++) scanf("%d",&arr[i]);
	int max = arr[0];
	for(int i =1; i<num; i++) if(arr[i]>max) max = arr[i];
	printf("Maximum number: %d\n", max);
}
