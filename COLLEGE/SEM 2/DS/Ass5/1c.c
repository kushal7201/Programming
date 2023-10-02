#include <stdio.h>

struct student
{
    int enroll_no;
    char name[30];
    char branch[6];
    float cgpa;
};
typedef struct student st;

void bubble_sort(st arr[], int num){
    int counter = 1;
    while(counter<num){
    for(int i=0; i<num-counter;i++)
    {
        if(arr[i].enroll_no>arr[i+1].enroll_no)
        {
            st temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    counter++;
    }
    // printf("--------------------------\n");
    // for(int i =0; i<num; i++){
    //     printf("Name: %s\nRoll_no: %d\nBranch: %s\nCGPA: %f\n", arr[i].name, arr[i].enroll_no, arr[i].branch, arr[i].cgpa);
    // }
    // printf("--------------------------");
}

int binary_search(st arr[],int l, int r, int roll){
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid].enroll_no==roll)
        return mid;
        else if(arr[mid].enroll_no<roll)
        l = mid+1;
        else r = mid-1;
    }
    return -1;
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
    bubble_sort(s, num);
    int roll;
    printf("\nEnter student roll number: ");
    scanf("%d", &roll);
    int var = binary_search(s, 0, num, roll);
    if (var > 0)
    {
        printf("----------------------------\n");
        printf("Name: %s\nRoll_no: %d\nBranch: %s\nCGPA: %f\n", s[var].name, roll, s[var].branch, s[var].cgpa);
        printf("----------------------------");
    }
    else
        printf("Not Found!\a");
    return 0;
}