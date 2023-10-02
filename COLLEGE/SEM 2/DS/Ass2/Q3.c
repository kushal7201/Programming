#include <stdio.h>
#include <malloc.h>
struct cricketer
{
    char name[25];
    int runs;
    float average;
};

int main()
{
    int n;
    printf("How many crickers? ");
    scanf("%d", &n);
    struct cricketer *c[n];
    for (int i = 0; i < n; i++)
        c[i] = malloc(sizeof(struct cricketer));
    for(int i =0; i<n; i++)
    {
        printf("Name[%d]: ", i+1);
        scanf("%s", c[i]->name);
        printf("Runs[%d]: ", i+1);
        scanf("%d", &c[i]->runs);
        printf("Average[%d]: ", i+1);
        scanf("%f", &c[i]->average);
    }
    printf("---------------------------------------\n");
    for(int i = 0; i<n; i++)
    {
        printf("\n%s %d %f",c[i]->name, c[i]->runs, c[i]->average);
    }
    printf("\n---------------------------------------\n");
    return 0;
}