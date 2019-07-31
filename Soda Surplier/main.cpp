#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e,f,c,dif=0,ans=0;
    scanf("%d%d%d",&e,&f,&c);
   dif=e+f;
while(dif/c){
        ans+=dif/c;
        dif=(dif%c)+(dif/c);

}
    printf("%d",ans);
    return 0;
}
