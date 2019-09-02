#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("holes.in", "r", stdin);
    freopen("holes.out", "w", stdout);
    int n;
    scanf("%d",&n);
    if(n==1){
            printf("0");
    }else if(n==0){
            printf("1");
    }else{
        if(n%2==0){
            n/=2;
            for(int i=0;i<n;i++){
                printf("8");
            }
        }else{
            printf("4");
            n/=2;
            for(int i=0;i<n;i++){
                printf("8");
            }
        }
    }
    return 0;
}
