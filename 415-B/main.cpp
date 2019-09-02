#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a,b,x;
int n;
int main()
{
    scanf("%d",&n);
    scanf("%lld%lld",&a,&b);
    while(n--){
        scanf("%lld",&x);
        printf("%lld ",((x*a)-b*((x*a)/b))/a);
    }
    return 0;
}
