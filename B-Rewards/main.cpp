#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    int n;
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    scanf("%d",&n);
    double count_a = a1+a2+a3;
    double count_b = b1+b2+b3;
    if((ceil((double)count_a/5.0)+ceil((double)count_b/10.0))<=n)printf("YES");
    else printf("NO");
    return 0;
}
