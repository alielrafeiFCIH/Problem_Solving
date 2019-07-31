#include <bits/stdc++.h>

using namespace std;
int mod =1e9+7;
long long num = 1;long long num2 = 1;
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        num=((num%(mod)*27%(mod))%(mod)),num2=((num2%(mod)*7%(mod))%(mod));
    cout<<(num%(mod)-num2%(mod)+mod)%mod;
        return 0;
}
