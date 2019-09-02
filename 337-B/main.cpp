#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x,div;
    if(b*c<a*d){
        x = a*d - b*c;
        div = __gcd(x,a*d);
        printf("%d/%d",x/div,(a*d)/div);
    }else{
        int x = b*c - a*d;
        int div = __gcd(x,b*c);
        printf("%d/%d",x/div,(b*c)/div);
    }
    printf("%d/%d",x/div,(b*c)/div);
    return 0;
}
