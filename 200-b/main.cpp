#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double ans=0;
    int x;
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&x);
        ans+=x;
    }
    printf("%f",ans/n);

    return 0;
}
