#include <bits/stdc++.h>

using namespace std;
map <int ,int >mp;
int main()
{
    int n,x,temp=0;
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
        scanf("%d",&x);
        mp[x]++;
        temp = max(temp,mp[x]);
    }
    if(temp>(n+1)/2)printf("NO");
    else printf("YES");
    return 0;
}
