#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    int ans =0,m=0;
    while(a>0){
        ans+=a;
        a+=m;
        m=a%b;
        a=a/b;
    }
    printf("%d",ans);
    return 0;
}
