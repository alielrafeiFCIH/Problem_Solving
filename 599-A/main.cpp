#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d1,d2,d3;
    scanf("%d%d%d",&d1,&d2,&d3);
    int path1,path2,path3,path4;
    path1=d1*2+d2*2;
    path2=d1+d3+d2;
    path3=d1*2+d3*2;
    path4=d2*2+d3*2;
    int a1=min(path1,path2);
    int a2=min(path3,path4);
    printf("%d",min(a1,a2));
    return 0;
}
