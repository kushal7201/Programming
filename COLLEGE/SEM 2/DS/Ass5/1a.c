#include <stdio.h>

struct student
{
    int enroll_no;
    char name[30];
    char branch[6];
    float cgpa;
};
typedef struct student st;

void linear_search(st arr[], int num, int roll)
{
    int var = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[i].enroll_no == roll)
        {
            var = i;
            break;
        }
    }
    if (var > 0)
    {
        printf("----------------------------\n");
        printf("Name: %s\nRoll_no: %d\nBranch: %s\nCGPA: %f\n", arr[var].name, roll, arr[var].branch, arr[var].cgpa);
        printf("----------------------------");
    }
    else
        printf("Not Found!\a");
}

int main()
{
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    st s[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Name, Enroll, Branch, CGPA of\n%d: ", i + 1);
        scanf(" %s %d", s[i].name, &s[i].enroll_no);
        scanf(" %s %f", s[i].branch, &s[i].cgpa);
    }
    int roll;
    printf("Enter student roll number: ");
    scanf("%d", &roll);
    linear_search(s, num, roll);
    return 0;
}