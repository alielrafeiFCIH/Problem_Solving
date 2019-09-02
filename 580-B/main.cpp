#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>>vii;

int main()
{
    int n,d,m,f;
    scanf("%d%d",&n,&d);
    ll ans=0;
    vii v(n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&v[i].first,&v[i].second);
    }
    sort(v.begin(),v.end());
    ll start=0,end=0,factor=0;
    while(start<n&&end<n){
        if(v[end].first-v[start].first>=d){
            factor-=v[start].second;
            start++;
            if(start>end)end=start,factor=0;
        }else{
            factor+=v[end].second;
            ans = max(factor,ans);
            end++;
        }

    }
    printf("%lld",ans);
    return 0;
}

/*
4 2

10909234 9

10909236 8

10909237 10

10909235 98

*/
