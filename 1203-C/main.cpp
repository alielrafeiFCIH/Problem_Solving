#include <bits/stdc++.h>

using namespace std;
long long a[400005];
long long gcd(long long a,long long b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
long long commDiv(long long n){

    long long result = 0;
    long long i;
    for ( i=1; i*i<=n; i++)
    {
        if (n%i==0)
        {
            result++;
            if(n/i!=i)result++;
        }
    }
    return result;
}

int main()
{

    int n;
    scanf("%d",&n);
    long long x,y;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long result=a[0];
    for (int i = 1; i < n; i++)
        result = gcd(a[i], result);

    printf("%lld",commDiv(result));
    return 0;
}
