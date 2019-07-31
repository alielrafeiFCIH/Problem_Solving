#include <bits/stdc++.h>

using namespace std;
vector<int>vx(100006);
vector<int>vh(100006);
int main()
{
    int trees;
    scanf("%d",&trees);
    int x,y;
    for(int i =0 ;i<trees;i++){
        scanf("%d%d",&x,&y);
       vx[i]=x;
       vh[i]=y;
    }

    int ans = 2;
    if(trees==1){printf("1");return 0;}
    int start = vx[0];
    for(int i =1;i<trees-1;i++){
        if(start<vx[i]-vh[i]){
            ans++;
            start=vx[i];
        }else if(vx[i]+vh[i]<vx[i+1]){
            ans++;
            start=vx[i]+vh[i];
        }else{
            start = vx[i];
        }
    }
    printf("%d",ans);
    return 0;
}
