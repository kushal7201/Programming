#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(0));
	int num;
	struct Marks
	{
		int roll_num;
		char name[20];
		int chem_marks;
		int maths_marks;
		int phy_marks;
	};

	printf("How many students? ");
	scanf("%d", &num);

	struct Marks student[num];

	for (int i = 0; i < num; i++)
	{
		student[i].roll_num = i;
		printf("Enter %d position student name: ", i);
		scanf("%s", student[i].name);
		student[i].chem_marks = rand() % 100 + 1; // this will input random marks between 1 to 100
		student[i].maths_marks = rand() % 100 + 1;
		student[i].phy_marks = rand() % 100 + 1;
	}

	for (int i = 0; i < num; i++)
	{
		float average = ((student[i].chem_marks + student[i].maths_marks + student[i].phy_marks) / 300.0) * 100;
		printf("%s got %.2f%\n", student[i].name, average);
	}
}
