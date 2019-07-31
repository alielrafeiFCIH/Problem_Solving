#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0 ; i<(int)n ; i++)

//ali elrafei
using namespace std;
//map<int,bool>mp;
int n,m,k;

int main()
{

    int x,y;
    scanf("%d%d%d",&n,&m,&k);
    vector<bool>mp(n+5);
    for(int i = 1;i<=n;i++)mp[i]=true;

    lp(i,m){
        scanf("%d",&x);
        mp[x]=false;
    }
    int ans ;
    bool flag = true;
    int pos = 1;
    lp(i,k){
        if(mp[pos]==false){
            ans = pos;
            break;
        }
        scanf("%d %d",&x,&y);

        if(pos==x)pos=y;
        else if(pos==y)pos=x;


    }
    printf("%d",pos);
//cout<<pos;
    return 0;
}
