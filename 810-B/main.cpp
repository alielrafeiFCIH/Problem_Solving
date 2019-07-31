#include <bits/stdc++.h>

using namespace std;
int a [100005];
bool comp(int a ,int b){
    return a>b;
}
int main()
{
    int n,f,x,y;
    scanf("%d%d",&n,&f);
    long long ans = 0 ;
    for(int i = 0 ;i<n;i++){
        scanf("%d%d",&x,&y);
        ans+=min(x,y);
        if(y>x){
            int num = min(y,x*2) - x;
           a[i] = num;
        }
    }


    sort(a,a+n,comp);

        for(int j = 0 ;j<f;j++){
            ans+=a[j];
        }

//    for(int i = 0 ;i<n;i++)
//        ans+=min(a[i].first,a[i].second);

        cout<<ans;
    return 0;
}
