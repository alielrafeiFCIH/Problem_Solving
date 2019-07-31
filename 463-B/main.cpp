#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100005];
    int n;
    scanf("%d",&n);
    int mx = 0;
    for(int i =0 ;i<n;i++){
    scanf("%d",&a[i]);
        mx = max(mx,a[i]);
    }
    printf("%d",mx);
    return 0;
}
