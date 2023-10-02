#include<stdio.h>
#include<math.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_num;
    float cgpa;
};

int main()
{
    printf("How many students? ");
    int n;
    scanf("%d", &n);
    struct student s[n];
    for(int i =0; i<n;i++)
    {
        printf("Name[%d]: ", i+1);
        scanf("%s", s[i].name);
        printf("Roll_num[%d]: ", i+1);
        scanf("%d", &s[i].roll_num);
        printf("CGPA[%d]: ", i+1);
        scanf("%f", &s[i].cgpa);
    }
    float min = s[0].cgpa, max = s[0].cgpa;
    int min_index, max_index;
    for(int i =1; i<n; i++)
    {
        if(s[i].cgpa<min)
        {
            min = s[i].cgpa;
            min_index = i;
        }
    }
    for(int i =1; i<n; i++)
    {
        if(s[i].cgpa>max)
        {
            max = s[i].cgpa;
            max_index = i;
        }
    }
    printf("---------------------------------------\n");
    printf("\nMinimum: \nName: %s\nRoll_num: %d\nCGPA: %f\n", s[min_index].name,s[min_index].roll_num,s[min_index].cgpa);
    printf("Maximum: \nName: %s\nRoll_num: %d\nCGPA: %f", s[max_index].name,s[max_index].roll_num,s[max_index].cgpa);
    printf("\n---------------------------------------\n");
    return 0;
}