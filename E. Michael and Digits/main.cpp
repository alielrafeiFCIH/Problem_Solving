#include <iostream>
typedef long long ll;
using namespace std;
ll find_sum(ll num){
    ll sum =0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    ll num;
    scanf("%lld",&num);
    ll ans = find_sum(num);
    num%ans==0?printf("Cool"):printf("Not Cool");
    return 0;
}
