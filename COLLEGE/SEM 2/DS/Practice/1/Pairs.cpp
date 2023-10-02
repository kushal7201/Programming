#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,count=0;
    cout<<"Enter size of arrays: ";
    cin>>s>>t;
    int arr1[s];
    cout<<"Enter the elements of array1: ";
    for(int i =0; i<s; i++) cin>>arr1[i];
    int arr2[t];
    cout<<"Enter the elements of array2: ";
    for(int i =0; i<t; i++) cin>>arr2[i];
    
    int i =0, j =0;
    while(i<s && j<t)
    {
        if(arr1[i]>arr2[j]) count++;
        j++;
        if(j==t){
            i++;
            j=0;
        }
    }
    cout<<"No. of pairs: "<<count;
}
