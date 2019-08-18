#include <bits/stdc++.h>

using namespace std;
int a[1001];
int b[1001];
int main()
{
    int n;
    int m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    sort(b,b+m);
    printf("%d %d",a[n-1],b[m-1]);
    return 0;
}
