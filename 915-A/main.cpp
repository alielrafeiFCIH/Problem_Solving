#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0; i<n ; i++)
using namespace std;

int main()
{
    int n ;
    int k;
    int modular =0;
    int answer = 1e8;
    scanf("%d%d",&n,&k);
    lp(i,n){
        scanf("%d",&modular);
        if(k%modular==0){
            modular=(k/modular);
            answer=min(answer,modular);
        }
    }
    printf("%d",answer);
    return 0;
}
