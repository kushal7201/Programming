#include<bits/stdc++.h>
using namespace std;

int F (int n, int *Fprev )
{
int Fn_1, Fn_2;

if(n == 0){
*Fprev = 1;
return 0;
}
if( n==1){
*Fprev = 0;
return 1;
}
Fn_1 = F(n-1,&Fn_2);
*Fprev = Fn_1;
return(Fn_1+ Fn_2);
}
int main()
{
    int n,fprev;
    cin>>n;
    cout<<F(n,&fprev);    
    return 0;
}