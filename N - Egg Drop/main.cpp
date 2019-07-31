#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans1=1,ans2=k;
    int max1=-1000000,min2=1000000;
    for(int i=0 ; i<n ; ++i){
        int x;
        string s1;
        cin>>x>>s1;
        if(s1=="SAFE")max1=max(max1,x);
        else if(s1=="BROKEN")min2=min(min2,x);
    }
    if(max1==-1000000)cout<<ans1+1<<' ';
    else cout<<max1+1<<' ';
    if(min2==1000000)cout<<ans2-1;
    else cout<<min2-1;
    return 0;
}
