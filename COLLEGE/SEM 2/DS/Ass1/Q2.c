#include<stdio.h>
#include<string.h>


int main()
{
	char s[1000];
	int size;
	printf("Enter a word: ");
	scanf("%s", s);
	char *p;
	p = s;
	for(int i =0; i>=0 ;i++, p++)
	{
		if(*p=='\0') 
		{
			size = i;
			break;
		} 
	}
	printf("The size of array is: %d\n", size);
}
