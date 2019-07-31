#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{   freopen("fractions.in" , "r" , stdin);
    int n,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    long long ans =(((n*n)-n)/2)*n;
    int mp[505][505];
    memset(mp,0,sizeof(mp));
    for(int i=2;i<=n;i++){
        for(int j =1;j<i;j++){
                int g = gcd(j,i);
                int x = j/g;
                int y = i/g;
                int num = y-x;
                ans+=(long long)mp[num][y];
                ++mp[x][y];
        }
    }

    printf("%lld\n",ans);
    }

    return 0;
}
