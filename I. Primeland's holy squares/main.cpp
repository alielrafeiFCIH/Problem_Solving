#include <bits/stdc++.h>

using namespace std;
int a[15]={0};
int t,n,k;
bool cheak(int s){
    for(int i=0;i<n;i++){
        if(s%a[i]==0)return false;
    }
    return true;
}
int main()
{
//freopen("number.in","r",stdin);
    cin>>t;
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&k);
        int cont=0;
            for(int j=0;j<n;j++){
                scanf("%d",&a[j]);
            }
           int s=1,ans=0;
           while(cont!=k){
            if(cheak(s)){
                ++cont;
                ans=s;
                }
                ++s;

           }

            cout<<ans<<endl;
    }
    return 0;
}
