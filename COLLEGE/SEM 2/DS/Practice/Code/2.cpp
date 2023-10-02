#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, a,b;
	    int arr1[a], arr2[b];
	    int count1=0, count2=0;
	    for(int i =0; i<a; i++) cin>>arr1[i];
	    for(int i =0; i<b; i++) cin>>arr2[i];
	    // for(int i =0; i<a; i++) cout<<arr1[i]<<" ";
	    // for(int i =0; i<b; i++) cout<<arr2[i]<<" ";
	    for(int i = 0; i<a; i++) 
	    {
	        for(int j =0; j<b; j++)
	        {
	            if(arr1[i]==arr2[j]) count1++;
	        }
	    }
	    for(int i =1; i<=n; i++)
	    {
	        int flag =1;
	        for(int j =0; j<a; j++)
	        {
	            if(i==arr1[j]){
	                flag = 0;
	                break;
	            }
	        }
	        if(flag==1){
	            int flag2 =1;
	            for(int k =0; k<b; k++)
	            {
	                if(i==arr2[k]){
	                    flag2 =0; 
	                    break;
	                }
	            }
	            if(flag2==1) count2++;
	        }
	    }
	    cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
