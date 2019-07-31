#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    int x;
    int r;
    scanf("%d%d",&k,&r);
    for(int i = 1;i<10;i++){
        if((i*k)%10==0){
            printf("%d",i);
            return 0;
        }else if((k*i)%10 == r){
            printf("%d",i);
            return 0;
        }

    }

    return 0;
}
