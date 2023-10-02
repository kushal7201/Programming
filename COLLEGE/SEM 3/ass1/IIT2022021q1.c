#include<stdio.h>
#include<string.h>

int main(){

	int arr[3][3];
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[0][2] = 0;
	arr[1][0] = 1;
	arr[1][1] = 2;
	arr[1][2] = 0;
	arr[2][0] = 2;
	arr[2][1] = 2;
	arr[2][2] = 2;
	for(int i =0; i<3; i++){
		for(int j =0; j<3; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int n;
	printf("Enter the string length: ");
	scanf("%d", &n);
	char str[n];
	scanf("%s",str);
	int current =0;
	int final = 2;
	printf("%d ",current);
	for(int i =0; i<n; i++){
			if(str[i] =='a'){ 
			current = arr[current][1];printf("%d ",current);
			}
			else {
			current = arr[current][2];printf("%d ",current);
		}
	}
	printf("\n");
	if(current==2) printf("Yes");
	else printf("No");
	printf("\n");

}
