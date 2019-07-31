#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,n,flag=1,mx=0;
    cin>>a>>b>>n;
    while(n!=0){
            mx=0;
       for(int i=1;i<=max(a,n);i++){
            if(a%i==0&&n%i==0){
                mx=i;
            }
            flag=0;
       }
       n=n-mx;
       if(n==0)break;
            mx=0;
          for(int i=1;i<=max(b,n);i++){
            if(b%i==0&&n%i==0){
                mx=i;
            }
            flag=1;
       }
       n=n-mx;
       if(n==0)break;

    }
    if(flag==0){
            cout<<flag<<endl;
    }else{
        cout<<flag<<endl;
    }
    return 0;
}
