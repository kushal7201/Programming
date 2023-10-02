#include<stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} date;
void swap(date *a,date *b) {
    date temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,i,j;
    printf("How many dates? ");
    scanf("%d",&n);
    date a[n];
    printf("Enter date(day month year): ");
    for (i=0;i<n;i++) {
        scanf("%d %d %d",&a[i].day,&a[i].month,&a[i].year);
    }
    
    for (i=0;i<n;i++) {
        for (j=i;j<n;j++) {
            if (a[i].year>a[j].year) swap(&a[i],&a[j]);
            else if (a[i].year==a[j].year){
                if (a[i].month>a[j].month) swap(&a[i],&a[j]);
                else if (a[i].month==a[j].month) {
                    if (a[i].day>a[j].day) swap(&a[i],&a[j]);
                }
            }
            
        }
    }
    printf("-----------------------\n");
    for (i=0;i<n;i++) {
        printf("%d-%d-%d\n",a[i].day,a[i].month,a[i].year);
    }
    printf("------------------------");
}