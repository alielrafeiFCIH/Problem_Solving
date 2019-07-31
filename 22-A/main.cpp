#include <bits/stdc++.h>

using namespace std;
int a[101];
const int oo = 1e8;
int main()
{
    int n;
    scanf("%d",&n);
    int mx = 0;
    int mn = oo;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    sort(a,a+n);
    int it=upper_bound(a,a+n,mn)-a;

    if(it<n)cout<<a[it];
    else cout<<"NO";
    return 0;
}
