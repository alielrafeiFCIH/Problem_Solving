#include <bits/stdc++.h>

using namespace std;

int main()
{
//   to get the las digit for 2^100;
    int i,j,p;
    scanf("%d",&p);
    for(i = 1 ;i<p;i++){
            int ans = 1;
   for( j = 1 ;j<p-1;j++){
    ans=(ans*i)%p;
     printf("%d\n",ans);
   }
   printf("\n");
    }

    return 0;
}
