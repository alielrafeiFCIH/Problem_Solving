#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,y,x1,y1,d;
    scanf("%lld %lld %lld %lld %lld",&x,&y,&x1,&y1,&d);
    if(x+d<x1||x1+d<x)printf("NO");
    else if(y+d<y1||y1+d<y)printf("NO");
    else printf("YES");
    return 0;
}
