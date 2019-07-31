#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long ans = 0;
    for(int i = 0  ; i<n ; ++i)
    {
        int x;
        scanf("%d" , &x);
        int l = 1 , r = 1e5;
        while(l<r)
        {
            int mid = l + (r-l+1)/2;
            if(1ll*mid*(mid+1)/2 <= x) l = mid;
            else r = mid-1;
        }
        ans+=l;
    }
    cout<<ans<<endl;
}
