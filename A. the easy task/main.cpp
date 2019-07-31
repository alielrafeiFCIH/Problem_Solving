#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a,b,c,d,e;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    scanf("%d",&n);
    int temp;
    for(int i=1;i<=n%5;i++){
       temp=a;
       a=b;
       b=c;
       c=d;
       d=e;
       e=temp;
    }
    printf("%d %d %d %d %d",a,b,c,d,e);

    return 0;
}
