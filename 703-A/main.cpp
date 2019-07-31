#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    scanf("%d",&n);
    int m,c,contm=0,contc=0;
    for(int i = 0;i<n;i++){
        scanf("%d%d",&m,&c);
        if(m>c){
             contm++;
        }else if(m<c){
        contc++;
        }else{
            contc++;
            contm++;
        }
    }
    if(contc>contm){
            printf("Chris");
    }else if(contc<contm){
        printf("Mishka");
    }else{
    printf("Friendship is magic!^^");

    }
    return 0;
}
