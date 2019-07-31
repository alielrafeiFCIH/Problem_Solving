#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,k,d;
    scanf("%d%d%d%d",&n,&t,&k,&d);
    int sum1 = 0,t1=0,t2=d,sum2=k*(d/t);

    while(n>sum1){
        t1+=t;
        sum1+=k;
    }
    while(n>sum2){
        t2+=t;
        sum2+=k*2;
    }
    if(sum1>=n&&sum2>=n){
        if(t1>t2){
        printf("YES");
        }else{
        printf("NO");
        }
    }else if(sum1<n&&sum2>=n){
    printf("YES");
    }else if(sum1>=n&&sum2<n){
    printf("NO");
    }



    return 0;
}
