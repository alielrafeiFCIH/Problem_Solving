#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2;
    scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
    int x=-1,y=-1,z=-1,m=-1;
    y = ((r1+d2)-c1)/2;
    x = r1-y;
    z = d2-y;
    m = d1-x;
    if((x>0&&x<10)&&(y>0&&y<10)&&(z>0&&z<10)&&(m>0&&m<10)){
    x+y==r1&&z+m==r2&&x+z==c1&&y+m==c2&&x+m==d1&&y+z==d2?(x!=y&&x!=z&&x!=m)&&(y!=m&&y!=z)&&(z!=m)?printf("%d %d\n%d %d",x,y,z,m):printf("-1"):printf("-1");
    return 0;
    }
    printf("-1");
    return 0;
}
