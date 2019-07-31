#include <bits/stdc++.h>

using namespace std;
const auto Max 10000000;
int saved_fib[Max];
int dp_fib(int n){//dp solution
int fib[Max];
fib[0] = fib[1] = 1;//base case
    for(int i =2;i<n;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int fibsave(int n){//memoziation
    if(n<=1)
        return 1;
    if(saved_fib[n]!=-1)
            return saved_fib[n];
    return saved_fib[n] = fibsave(n-2)+fibsave(n-1);
}
int main()
{
    memset(saved_fib,-1,sizeof(saved_fib));
    int n;
    scanf("%d",&n);
    printf("%d",fibsave(n));
    return 0;
}
