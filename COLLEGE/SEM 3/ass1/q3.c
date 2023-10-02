#include<stdio.h>
#include<string.h>

void dfa(int arr[][3], char str[]){
	int current =0;
	int i =0;
	while(str[i]!='\0'){
		if(str[i] =='a'){ 
			current = arr[current][1];printf("%d ",current);
			}
			else {
			current = arr[current][2];printf("%d ",current);
		}
	i++;
	}
	printf("\n");
	if(current==2) printf("Yes");
	else printf("No");
	printf("\n");
}

int main(){
	int row, col;
	char str[100];
	printf("Enter string: ");
	scanf("%s",str);
	printf("Enter the no. of rows and cols: ");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i=0; i<row; i++){
	for(int j=0; j<col; j++){
	scanf("%d",&arr[i][j]);
	}
	}
	dfa(arr, str);
	
}
