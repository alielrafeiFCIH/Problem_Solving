#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ans =0 ;
    int time = 1200+k;
    int h=0,h1=0,m=0,problems = 0;
    for(int i =1 ;i<=n;i++){
        problems=i*5;
       if((time += problems)<=1440){
        ans++;
       }
    }
    printf("%d",ans);
    return 0;
}
