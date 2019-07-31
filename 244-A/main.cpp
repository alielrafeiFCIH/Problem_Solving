#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,x;
    int a[902];
    for(int i = 0  ;i<902;i++ )a[i]=0;
    scanf("%d%d",&n,&k);
    for(int i = 1;i<=k;i++){
        scanf("%d",&x);
        a[x]=i;
    }
    int c=0,temp=0;
    for(int i = 1 ;i<=k;i++){
        for(int j = 1 ;j<=n*k;j++){
          if(a[j]==i){
                printf("%d ",j);
                a[j]=i;
                temp++;
            }
            if(c<n-1){
                if(a[j]==0){
                    printf("%d ",j);
                    a[j]=i;c++;
                }
            }
            if(c+temp==n)break;
        }
        printf("\n");
        c=0;
        temp=0;
    }

    return 0;
}
