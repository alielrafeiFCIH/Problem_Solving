#include <bits/stdc++.h>

using namespace std;

#define lp(i,n) for(int i = 0;i<n;i++)
#define SZ(x) (x).size()
#define rlp(i,n) for(int i =n-1;i>=0;i--)


int a[100005];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    long long sum =0;
    lp(i,n){
        scanf("%d",&a[i]);
    }
    lp(i,n){
        if(k&&a[i]<0)a[i]*=-1,k--;
    }
    sort(a,a+n);
    if(k&1)a[0]*=-1;
    else a[0]*=1;
    lp(i,n)
    sum+=a[i];
//    if(k){
//        if(k&1 && a[0]>=0)sum-=2*a[0];
//        else if(k&1 && a[0]<0) sum+=abs(a[0])*2;
//        else if(!(k&1) && a[0]>=0)sum+=0;
//        else if(!(k&1) && a[0]<0)sum+=abs(a[0])*2;
//
//    }
    printf("%I64d",sum);
    return 0;
}
