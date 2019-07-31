#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,a,b;

    int temp;
    int r1=0,p1=0,p2=100000000;
    double r2 ;
    cin>>n;
    while(n--)scanf("%d",&temp),r1= max(r1,temp);
    cin>>x;
    while(x--)scanf("%d",&temp),p1= max(p1,temp);
    cin>>y;
    while(y--)scanf("%d",&temp),p2= min(p2,temp);
    cin>>a>>b;
    r2 = 1.0*r1*sqrt((double)b*p1/(double)(a*p2+b*p1));
    printf("%.6f",r2);
    return 0;
}
