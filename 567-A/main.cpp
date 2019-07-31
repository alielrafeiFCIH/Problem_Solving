#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a[100000];
    int n;
    scanf("%I64d",&n);
    for(int i = 0 ;i<n;i++){
        scanf("%I64d",&a[i]);
    }
    printf("%I64d %I64d\n",abs(a[0]-a[1]),abs(a[0]-a[n-1]));
    for(int i = 1   ;i<n-1;i++){
        long long mx,mn;

       mn = min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
       mx = max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));

        printf("%I64d %I64d\n",mn,mx);

    }
    printf("%I64d %I64d",abs(a[n-1]-a[n-2]),abs(a[0]-a[n-1]));
    return 0;
}
