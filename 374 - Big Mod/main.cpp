#include <bits/stdc++.h>

using namespace std;
long long int b,p,m;
long long  power(long long b,long long p,long long m){
    if(p==0) return 1;
    if(p%2==0)return (power(b,p/2,m)*power(b,p/2,m))%m;
    return (power(b,p-1,m)*(b%m))%m;
}
int main()
{

    while(cin>>b>>p>>m){
      long long  ans = power(b,p,m);
      cout<<ans<<endl;

    }
    return 0;
}
//2374859
//3029382
//36123
