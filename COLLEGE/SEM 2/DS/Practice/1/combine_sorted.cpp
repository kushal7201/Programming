#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Total size of array: ";
    cin>>n;
    int arr1[n/2];
    cout<<"Enter the elements of array1: ";
    for(int i =0; i<n/2; i++) cin>>arr1[i];
    int arr2[n/2];
    cout<<"Enter the elements of array2: ";
    for(int i =0; i<n/2; i++) cin>>arr2[i];
    
    int arr[n], i =0, j =0, k =0;
    while(i<n/2 && j<n/2)
    {
        if(arr1[i]<arr2[j]) 
        arr[k++]= arr1[i++];
        else 
        arr[k++] = arr2[j++];
    }
    while(i<n/2)
    arr[k++] = arr1[i++];
    while(j<n/2)
    arr[k++] = arr2[j++];
    cout<<"Final Merged array: ";
    for(int i =0; i<n;i++)
    cout<<arr[i]<<" ";
}
