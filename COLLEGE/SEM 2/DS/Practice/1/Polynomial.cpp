#include <bits/stdc++.h>
using namespace std;

 // polynomial: 3x2 + x+1, 2
int polynomial(int n)
{   int a[n+1];
    cout<<"Type the coefficients(a0 to an): ";
    for(int i =0; i<n+1;i++) cin>>a[i];
    int c;
    cout<<"Enter value to be inserted: ";
    cin>>c;
    int power = 1, y = a[0];
    for (int i = 1; i <= n; i++)
    {
        power *= c;
        y+=a[i]*power;
    }
    cout<<"Polynomial = ";
    for(int i =n; i>=0;i--) 
    {
        if(i==0)cout<<a[i];
        else if(i==1)cout<<a[i]<<"x"<<" + ";
        else cout<<a[i]<<"x"<<i<<" + ";
    }
    cout<<endl<<"Result = "<<y;
}

int horner(int n)
{   int a[n+1];
    cout<<"Type the coefficients(a0 to an): ";
    for(int i =0; i<n+1;i++) cin>>a[i];
    int c;
    cout<<"Enter value to be inserted: ";
    cin>>c;
    int y = a[n];
    for (int i = 1 ;i <= n; i++)
    {
        y= y*c +a[n-i];
    }
    cout<<"Polynomial = ";
    for(int i =n; i>=0;i--) 
    {
        if(i==0)cout<<a[i];
        else if(i==1)cout<<a[i]<<"x"<<" + ";
        else cout<<a[i]<<"x"<<i<<" + ";
    }
    cout<<endl<<"Result = "<<y;
}



int main()
{
    int n;
    cout<<"Enter highest power of polynomial: ";
    cin>>n;
    // polynomial(n);
    horner(n);
}
// (√2)^n < (log n)^n < 2^√n < (log n)^2 < n^2 < (n log n)^2 < n^√n < n^n