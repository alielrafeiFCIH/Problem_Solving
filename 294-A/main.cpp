#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d",&n);
    int a[101];
    for(int i = 1 ;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d",&m);
    //i-1 left up
    //i+1 right down
    int sum  = 0;
    for(int i = 0 ;i<m;i++){
        scanf("%d%d",&x,&y);
        sum = abs(a[x]-y);
        if(x-1<1){
            a[x+1]+=sum;
            a[x]=0;
        }else if(x+1>n){
            a[x-1]+=(y-1);
            a[x]=0;
        }else{
            a[x+1]+=sum;
            a[x-1]+=(y-1);
            a[x]=0;
        }
    }
    for(int i =1 ;i<=n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
