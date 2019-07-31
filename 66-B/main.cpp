#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0 ; i<(int)n ; i++)
//ali el rafei

using namespace std;

int main()
{
    int n;
    int a[1005];
    scanf("%d",&n);
    lp(i,n){
        scanf("%d",&a[i]);
    }
    int ans = 0;
    lp(i,n){
        int cnt1 = 1,cnt2 = 0;
        for(int j = i;j<n-1;j++)if(a[j]>=a[j+1])cnt1++;else break;

        for(int j = i;j>0;j--)if(a[j]>=a[j-1])cnt2++;else break;

        ans = max(ans,cnt1+cnt2);
    }
    printf("%d",ans);
    return 0;
}
