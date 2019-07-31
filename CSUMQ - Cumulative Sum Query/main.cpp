#include <bits/stdc++.h>

using namespace std;
int a[100000];
int b[100000];
int main()
{
    int n,q,l,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(int i=1;i<n;i++){
        a[i]+=a[i-1]
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d%d",&l,&r);
        if(l)printf("%d\n",a[r]-a[r-1]);
        else printf("%d\n",a[r]);
    }
    return 0;
}
