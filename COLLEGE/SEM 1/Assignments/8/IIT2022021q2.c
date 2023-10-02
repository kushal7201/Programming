#include <stdio.h>
#include <math.h>

struct point
{
	int xcoord;
	int ycoord;
} p[5];

float dist(int x1, int y1, int x2, int y2)
{
	float a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return a;
}

int main()
{
	int array[4];
	for (int i = 0; i < 5; i++)
	{
		printf("\aEnter xcoordinate of point %d: ", i + 1);
		scanf("%d", &p[i].xcoord);
		printf("Enter ycoordinate of point %d: ", i + 1);
		scanf("%d", &p[i].ycoord);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Coordinate of point %d is (%d,%d)\n", i + 1,p[i].xcoord,p[i].ycoord);
	}
	float min = dist(p[0].xcoord, p[1].xcoord, p[0].ycoord, p[1].ycoord);
	int ind1,ind2;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (dist(p[i].xcoord, p[j].xcoord, p[i].ycoord, p[j].ycoord) <=min)
			{
				min = dist(p[i].xcoord, p[j].xcoord, p[i].ycoord, p[j].ycoord);
				ind1=i;
				ind2=j;
			}
		}
	}
	printf("The closest points are: (%d,%d) and (%d,%d)", p[ind1].xcoord,p[ind1].ycoord,p[ind2].xcoord,p[ind2].ycoord);
	return 0;
}
