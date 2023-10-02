#include<stdio.h>
struct employee
{
	char name[20];
	int acc_num;
	int balance;
}emp[5] = {{"A",11,312},{"B",15,57},{"C",21,532},{"D",33,43},{"E",51,202}};
void low_bal()
{
	for(int i = 0;i<5;i++)
	{
		if(emp[i].balance<200) printf("%s has balance less than 200$\n",emp[i].name); 
	}
}

int main()
{
	low_bal();
}
