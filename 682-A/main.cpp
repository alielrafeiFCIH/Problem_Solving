#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    long long int a[5];
    long long int b[5];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    scanf("%d%d",&n,&m);
    for(int i = 1;i<=n;i++)a[i%5]++;

    for(int i = 1;i<=m;i++)b[i%5]++;
    printf("%I64d",a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1]);
    return 0;
}
