#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int where_is[11];
int main()
{
    int n;
    scanf("%d",&n);
    int i =0;
    if(n==4){printf("1"); return 0;}
    else if(n==7){printf("2");return 0;}
    while(n!=0){
        where_is[i++]=n%10;
        n/=10;
    }
    ll four = 1;
    ll seven = 2;
    ll ans = 0;
    for(int j=0;j<i;j++){
        where_is[j]==4?ans+=four:ans+=seven;
        seven=(seven<<1);
        four=(four<<1);
    }
    printf("%lld",ans);

    return 0;
}
