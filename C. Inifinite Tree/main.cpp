#include <bits/stdc++.h>
using namespace std;

long long n,m;


int main(){
   freopen("leaves.in" , "r" , stdin);
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&m);
        long long x= m+1;
        long long lev = log2((double)x);
        long long ans = pow(2 , lev);
        long long st_level = n*ans;
        printf("%lld\n",st_level+ (x-ans));
    }
    return 0;
}
