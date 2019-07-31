#include <bits/stdc++.h>

using namespace std;

int main()
{  // freopen("battuta.in","r",stdin);
    int n=0,t;
     int a[100005];
    int a2[100005][2];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        for(int i =0;i<n;i++){
            for(int j =0;j<2;j++){
                cin>>a2[i][j];
            }
        }
        int ans =0;
        for(int i =0;i<n-1;i++){
            ans += abs(a2[a[i]-1][0]-a2[a[i+1]-1][0])+abs(a2[a[i]-1][1]-a2[a[i+1]-1][1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
