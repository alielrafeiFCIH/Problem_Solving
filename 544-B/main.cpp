#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int b=n*n;
    b =(int)ceil((double)b/2.0);
    if(k<=b){
     printf("YES\n");
        int cond = 1;
        int flag = 1;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if(cond&&k){
                    printf("L");
                    k--;
                }else{
                    printf("S");
                }
                cond=cond^1;
            }
            if(flag)flag=0,cond=0;
            else flag=1,cond=1;
            printf("\n");
        }

    }else{
         printf("NO");
    }
    return 0;
}
