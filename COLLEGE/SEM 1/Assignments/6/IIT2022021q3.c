#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int id[100], marks[100];
int get(int x)
{
    return marks[x+1];
}
void add(int x, int y)
{
    id[x+1] = x;
    marks[x+1] = y;
}
float average()
{
    int sum=0;
    for (int i = 0; i < 70; i++)
    {
        sum+=marks[i];
    }
    return (float)sum/70;
    
}
int main()
{
    srand(time(0));
    
    for (int i = 0; i < 70; i++)
    {
        id[i]= i+1;
    }
    for (int i = 0; i < 70; i++)
    {
        marks[i] = rand()%100 +1; //Random Marks from 1 to 100
    }
    printf("%d\n", get(34));
    add(74, 43);
    printf("%d\n", get(74));
    printf("%f", average());
    return 0;
}
