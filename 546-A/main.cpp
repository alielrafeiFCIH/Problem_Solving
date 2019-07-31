#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int k,w,n;
    scanf("%d%d%d",&k,&w,&n);
    int ans=0,tmp=0;
    tmp=n*(n+1)/2;
    tmp=k*tmp;
    if(tmp<=w){
        printf("0");
    }else{
    ans=abs(tmp-w);
    printf("%d",ans);

    }
    return 0;
}
