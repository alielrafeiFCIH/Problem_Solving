#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    do{

        int bit[101][101];
        int r[101];
        int c[101];
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&bit[i][j]);

            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                r[i]+=bit[i][j];
                c[i]+=bit[j][i];
            }
        }
        int points_r=0,points_c=0;
        int a,b;
        for(int i=0;i<n;i++){
            if(r[i]&1)points_r++,a=i;
            if(c[i]&1)points_c++,b=i;
        }
        if(!points_c&&!points_r)printf("OK\n");
        else if(points_c==1&&points_r==1)printf("Change bit (%d,%d)\n",a+1,b+1);
        else printf("Corrupt\n");
    scanf("%d",&n);
    }while(n);
    return 0;
}
