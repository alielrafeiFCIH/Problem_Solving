#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T,x,y;
   scanf("%d",&T);
   for(int i=0;i<T;i++){
    scanf("%d%d",&x,&y);

    if(i==T-1){
        printf("%d",x+y);
    }else{
    printf("%d\n",x+y);
    }
   }

    return 0;
}
