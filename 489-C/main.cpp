#include <bits/stdc++.h>

using namespace std;
int sm[101];
int lg[101];
void checks(int m,int sum){

    if(sum==0){
        if(m==1){
            printf("0");
            return ;
        }else{
            printf("-1");
            return ;
        }
    }
    if(sum>9*m){
        printf("-1");
        return ;
    }else{
        sum-=1;
        for(int i = m-1;i>0;i--){
            if(sum>9){
                sm[i]=9;
                sum-=9;
            }else{
                sm[i]=sum;
                sum=0;
            }
        }
        sm[0]=sum+1;
        for(int i = 0 ;i<m;i++){
            printf("%d",sm[i]);
        }
    return ;
    }

}
void checkl(int m,int sum){

    if(sum==0){
        if(m==1){
            printf("0");
            return ;
        }else{
            printf("-1");
            return;
        }
    }
    if(sum>9*m){
        printf("-1");
        return ;
    }else{
        for(int i = 0;i<m;i++){
            if(sum>=9){
                lg[i]=9;
                sum-=9;
            }else{
                lg[i]=sum;
                sum=0;
            }
        }
        for(int i = 0 ;i<m;i++){
            printf("%d",lg[i]);
        }
    return ;
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    checks(n,m);
    printf(" ");
    checkl(n,m);





    return 0;
}
