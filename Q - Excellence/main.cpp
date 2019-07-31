#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0 ; i<n ; ++i)cin>>a[i];
    sort(a,a+n);
    int min1=3*1000000;
    for(int i=0 ; i<n/2 ; ++i)min1=min(min1,a[i]+a[n-i-1]);
    cout<<min1;
    return 0;
}
