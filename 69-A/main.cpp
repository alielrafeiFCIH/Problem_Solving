#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sumx=0,sumy=0,sumz=0,z,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0&&sumy==0&&sumz==0){
        printf("YES");
    }else{
    printf("NO");
    }
    return 0;
}
