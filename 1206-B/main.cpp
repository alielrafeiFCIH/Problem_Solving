#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int count_zeros = 0;
    int ones = 0;
    long long  ans = 0;
    int x;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x==0)ans++,count_zeros=1;
        if(x>0)ans += x-1;
        if(x<0)ones^=1,ans+=-1-x;
    }
    if(count_zeros||!ones)printf("%lld",ans);
    else {
       printf("%lld",ans+2);
    }
    return 0;
}
