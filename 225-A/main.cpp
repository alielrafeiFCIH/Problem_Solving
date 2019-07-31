#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;

    scanf("%d",&n);
    scanf("%d",&x);
    bool flag = true;
    for(int i = 0;i<n;i++){
            int a,b;
        scanf("%d %d",&a,&b);
        if(x+a!=7&&x+b!=7&&flag&&x!=a&&x!=b){
            flag = true;
        }else{
        flag = false ;
        }
       if(x%6==0){
        x=1;
       }else{
       x = x%6;
       }
    }
    flag?printf("YES"):printf("NO");
    return 0;
}

