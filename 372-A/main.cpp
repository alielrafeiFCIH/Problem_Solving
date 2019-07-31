#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,g,b,ans=0,mn=0,mn1=0;
    scanf("%d %d %d",&r,&g,&b);
    if(!r||!g||!b){
        ans = r/3 + g/3 + b/3;
    }else{
        int tempr=r,tempg=g,tempb=b;
        mn = min(r,min(g,b));
        r-=mn,b-=mn,g-=mn;
        mn+= r/3 + b/3 + g/3;
        mn1 = min(tempb,min(tempg,tempr))-1;
        tempb-=mn1,tempg-=mn1,tempr-=mn1;
        mn1+=tempb/3+tempg/3+tempr/3;
        ans =max(mn,mn1);
    }
    printf("%d",ans);
    return 0;
}
