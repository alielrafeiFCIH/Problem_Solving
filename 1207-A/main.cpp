#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q,b,f,h,c,p;
    scanf("%d",&q);
    while(q--){
        scanf("%d%d%d",&b,&p,&f);
        b/=2;
        scanf("%d%d",&h,&c);
        int burger =0;
        int chicken = 0;
        long long ans=0 ;
        if(h>c){
            burger = min(b,p);
            b-=burger;
            ans += burger*h;
            if(b){
                chicken = min(b,f);
                ans+=chicken*c;
            }
            printf("%lld\n",ans);
        }else if(h<c){
            chicken = min(b,f);
            b-=chicken;
            ans += chicken*c;
            if(b){
                chicken = min(b,p);
                ans+=chicken*h;
            }
            printf("%lld\n",ans);
        }else{
            chicken = min(b,f);
            b-=chicken;
            ans += chicken*c;
            if(b){
                chicken = min(b,p);
                ans+=chicken*h;
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
