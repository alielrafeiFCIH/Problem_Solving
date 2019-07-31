#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    map<int,int>mp;
    scanf("%d%d",&n,&m);
    int button;
    for(int i = 0;i<m;i++){
        scanf("%d",&button);
        for(int j = button;j<=n;j++){
            if(mp[j]==0)mp[j]=button;
            else break;
        }
    }
    for(int i = 1;i<=n;i++)
        cout<<mp[i]<<" ";
    return 0;
}
