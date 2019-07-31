#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,answer=0;
    scanf("%d%d",&n,&m);
    int temp = ceil(n/2.0);

        for(int i =temp;i<=n;i++){
            if(i%m==0){
                printf("%d",i);
                return 0;
            }
        }
        printf("-1");
    return 0;
}
