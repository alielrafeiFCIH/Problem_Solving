#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int a1=(c*d)/n,a2=((k*l)/nl)/n,a3=(p/np)/n;
    int ans = min(min(a1,a2),a3);
    printf("%d",ans);
    return 0;
}
