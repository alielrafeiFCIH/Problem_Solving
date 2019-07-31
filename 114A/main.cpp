#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
int a[1001];
int Maxn=-200;
int Minn=200;
int MaxIndex;
int MinIndex;
scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=Minn){
            MinIndex=i;
            Minn=a[i];
        }if(a[i]>Maxn){
            MaxIndex=i;
            Maxn=a[i];
        }
    }
    int ans=0;
    if(MaxIndex<MinIndex){
            ans+=MaxIndex;
            ans+=n-MinIndex-1;

    }else{
        ans+=MaxIndex;
        ans+=n-MinIndex-2;
    }
printf("%d",ans);
    return 0;
}
