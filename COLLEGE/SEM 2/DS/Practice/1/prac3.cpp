#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cout<<"Enter the size of arrays: ";
    cin>>s>>t;
    int a[s], b[t];
    cout<<"Enter elements of array1:" ;
    for(int i =0; i<s; i++) cin>>a[i];
    cout<<"Enter elements of array2:" ;
    for(int i =0; i<t; i++) cin>>b[i];
    int i = 0, j =0, count = 0;
    while(i<s && j<t)
    {
        if(a[i]>b[j])
        {
            count++;
            j++;
        }
        else{
            i++;
            j=0;
        }
    }
    return 0;
}