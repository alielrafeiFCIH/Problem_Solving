#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,teams=0;
   scanf("%d%d",&n,&m);
   if(n==0||m==0){cout<<"0"<<endl; return 0;}
   if(n==1&& m==1){
    cout<<"0"<<endl;
    return 0;
   }
   if(n==1&&m==0){
    cout<<"0"<<endl;
    return 0;
   }
   if(n==0&&m==1){
    cout<<"0"<<endl;
    return 0;
   }
   while(1){
    if(n>=m){
        n=n-2;
        m=m-1;
        ++teams;
    }else if(m>=n){
        n=n-1;
        m=m-2;
        ++teams;
    }
    if(n==0||m==0)break;
    if(n==1&&m==0)break;
    if(m==1&&n==0)break;
    if(m==1&&n==1)break;
   }
   printf("%d",teams);
    return 0;
}
