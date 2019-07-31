#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sx,sy,dx,dy;
    scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
    int x=(dx-sx);
    int y =(dy-sy);
    for(int i =0;i<x;i++)printf("R");
    for(int i=0;i<y;i++)printf("U");

    for(int i =0;i<x;i++)printf("L");
    for(int i=0;i<y;i++)printf("D");
    printf("D");
    for(int i=0;i<x+1;i++)printf("R");
    for(int i =0;i<y+1;i++)printf("U");
    printf("L");
    printf("U");
    for(int i=0;i<x+1;i++)printf("L");
    for(int i =0;i<y+1;i++)printf("D");
    printf("R");

    return 0;
}
