#include <stdio.h>

struct student
{
    int enroll_no;
    char name[30];
    char branch[6];
    float cgpa;
};
typedef struct student st;

void insertion_sort(st arr[], int num) {
    int i, j;
    for (i = 1; i < num; i++) {
        st key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j].cgpa < key.cgpa) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("--------------------------\n");
    for(int i =0; i<num; i++){
        printf("Name: %s\nRoll_no: %d\nBranch: %s\nCGPA: %f\n", arr[i].name, arr[i].enroll_no, arr[i].branch, arr[i].cgpa);
    }
    printf("--------------------------");
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
    insertion_sort(s, num);
    return 0;
}