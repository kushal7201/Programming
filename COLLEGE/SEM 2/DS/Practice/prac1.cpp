#include <iostream>
using namespace std;


int mod(int a, int b){
    if(a>=b) return a-b;
    else return b-a;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i =0; i<n;i++) cin>>arr[i];
		int min;
	    if(n==1) min = arr[0];
	    else min = mod(arr[0],arr[1]);
	    for(int i=0; i<n-1;i++)
	    {
	        int k= mod(arr[i],arr[i+1]);
	        if(k<min) min = k;
	    }
	    cout<<min<<endl;
	}
	return 0;
}
