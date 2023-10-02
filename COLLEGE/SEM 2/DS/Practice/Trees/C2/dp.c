#include<stdio.h>

// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }
long long int done[1000000], value[1000000];

long long int fib(long long int n){
    if(n==0){
        done[0] =1;
        value[0] = 0;
        return 0;
    }
    if(n==1){
        done[1] = 1;
        value[1] =1;
        return 1;
    }
    else{
        if(done[n]==1) return value[n];
        done[n] =1;
        value[n]=   fib(n-1)+fib(n-2);
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    long long int num;
    printf("Enter number: ");
    scanf("%lld",&num);
    printf("%lld",fib(num));
    return 0;
}