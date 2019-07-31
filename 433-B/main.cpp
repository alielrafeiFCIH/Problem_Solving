#include <bits/stdc++.h>

using namespace std;
long long int a[10000000];
long long int a1[1000000]={0};
long long int b[1000000]={0};
int main()
{
    long long int n,t,q,r1,r2;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
     for(int i=1;i<=n;i++){
        a1[i]+=a[i]+a1[i-1];
    }
    sort(a,a+n+1);
    for(int i=1;i<=n;i++){
        b[i]+=a[i]+b[i-1];
    }
    cin>>t;
    while(t--){

    cin>>q;
    if(q==2){
            cin>>r1>>r2;
       cout<<b[r2]-b[r1-1]<<endl;
    }else{
        cin>>r1>>r2;
       cout<<a1[r2]-a1[r1-1]<<endl;
    }

    }

    return 0;
}
