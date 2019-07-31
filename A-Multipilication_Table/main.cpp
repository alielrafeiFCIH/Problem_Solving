#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x;
    scanf("%I64d",&n);
    scanf("%I64d",&x);
    long long  count=0;

        for(int i=1;i<=n;i++){
            if(x%i==0&&x/i<= n)count++;

        }
        printf("%I64d",count);

    return 0;
}
