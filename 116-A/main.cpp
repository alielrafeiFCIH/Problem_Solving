#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,maxsum=0,x,y,ans=0;
    cin>>n;
    cin>>x>>y;
    sum=y-x;
    ans=sum;
    maxsum=sum;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        sum=sum+y-x;
        if(sum>maxsum){
            ans=sum;
            maxsum=sum;
        }
    }
    cout<<ans<<endl;

    return 0;
}
