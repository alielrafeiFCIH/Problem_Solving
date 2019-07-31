#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int ans = 0;
    if(a>=c){
        cout<<a;
        return 0;
    }
    while(1){
        if(a+b<=c){
            ans = a+b;
            a+=b;
        }else{
            ans = c;
            break;
        }
        if(c-d>=a){
            ans = c-d;
            c = c-d;
        }else{
            ans = a;
            break;
        }
    }
    cout<<ans;
    return 0;
}
