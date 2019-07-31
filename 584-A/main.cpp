#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,t;

    scanf("%d%d",&n,&t);
    if(t==10 && n==1){
        printf("-1");
        return 0;
    }
    if(t==10 && n>1){
            int c = 2;
        printf("10");
        for(int i = c;i<n;i++){
            printf("0");
        }

    }
    if(t<10 && n>1){
        for(int i =0;i<n;i++){
            printf("%d",t);
        }
    return 0;
    }
    if(t<10 && n==1){
        printf("%d",t);
        return 0;
    }

    return 0;
}
