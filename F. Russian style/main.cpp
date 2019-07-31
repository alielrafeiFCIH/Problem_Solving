#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,y;
    long long  ans=0;
    long long two = 2;
    cin>>n;
    cin>>y;
    long long x = n/y;
    ans+= x * two<<y-1;
    long long m = n%y;
    if(m)
    ans+=two<<m-1;

   cout<<ans;
    return 0;
}
