#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[1000],cont=0;
    cin>>n;
    for(int i=0;i<n*2;i++){
        cin>>a[i];
        ++cont;
    }
    sort(a,a+n*2);
    int sum1=0,sum2=0,x=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
        x=i;
    }
    int m;
    m=a[x];
for(int i=x+1;i<n*2;i++){
        sum2+=a[i];
        if(a[x]==a[i]){
    cout<<"NO"<<endl;
    return 0;
        }
    }

    if(sum1<sum2){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }
    return 0;
}
