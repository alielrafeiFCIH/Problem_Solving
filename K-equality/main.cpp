#include <bits/stdc++.h>
using namespace std;

long long n,m;
long long a[100];
long long b[30];

long long fun(long long x ,long long k){
    long long counter=0;
    for(long long i=0 ; i<n ; ++i){
        long long y=x-a[i];
        long long q=upper_bound(b,b+k,y)-b;
        --q;
        while(y>0){
            if(y>=b[q]){
                ++counter;
                y-=b[q];
            }
            else --q;
        }
    }
    return counter;
}

int main()
{
    freopen("equal.in" , "r" , stdin);
    scanf("%I64d%I64d",&n,&m);
    for(long long i=0 ; i<n ; ++i)scanf("%I64d",&a[i]);
    sort(a,a+n);
    long long j;
    b[0]=1;
    for(j=1 ; b[j-1]*m<=1e9 ; ++j)b[j]=b[j-1]*(long long)m;
    long long min1=1e9;
    for(long long i=a[n-1] ; i<=1000 ; ++i){
        min1=min(min1,fun(i,j));
    }
    printf("%I64d\n",min1);
    return 0;
}
