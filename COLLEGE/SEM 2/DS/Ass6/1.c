#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[], int low, int mid, int high){
    int n1= mid-low+1, n2= high- mid;
    int arr1[n1],arr2[n2];
    for(int i =0; i<n1;i++) arr1[i] = a[low+i];
    for(int i = 0; i<n2; i++) arr2[i] = a[mid+1+i];
    int i =0, j =0, k =low;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
        a[k++] = arr1[i++];
        else a[k++] = arr2[j++];
    }
    while(i<n1) a[k++] = arr1[i++];
    while(j<n2) a[k++] = arr2[j++];
}

void merge_sort(int a[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}


int main()
{
    srand(time(0));
    FILE *fp;
    fp = freopen("file.txt", "w",stdout);
    for(int i = 0; i <100000; i++){
        printf("%d ", rand());
    }
    fclose(fp);
    int arr[100000], i =0;
    FILE *fup = fopen("file.txt", "r");
    while(fscanf(fup, "%d", &arr[i])==1){
        i++;
    }
    fclose(fup);
    // for(int i =0; i<10; i++)
    // printf("%d ",arr[i]);
    merge_sort(arr, 0, 100000);
    FILE* fyp;
    fyp = freopen("Opfile.txt", "w",stdout);
    for(int i = 0; i <100000; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}