#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    scanf("%d",&n);
    int ans = 0,crimes =0, police =0;
    for(int i = 0; i<n ; i++){
            scanf("%d",&x);
        if(x==-1){
            crimes++;
        }else{
        police+=x;
        continue;
        }
        if(police==0 && crimes){
            ans++;
        }else {
           crimes--;
           police--;
        }

    }
    printf("%d",ans);
    return 0;
}
