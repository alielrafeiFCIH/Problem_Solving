#include <bits/stdc++.h>

using namespace std;
int mp[3];
int main()
{
    int n;
    scanf("%d",&n);
    int mod = 3,x;
    for(int i =0;i<n;i++){
        scanf("%d",&x);
        mp[mod%3]+=x;
        mod=(mod+1)%3;
    }
    if(mp[0]>mp[1]&&mp[1]>mp[2]){
        printf("chest");
    }else if(mp[1]>mp[0]&&mp[0]>mp[2]){
        printf("biceps");
    }else{
        printf("back");
    }

    return 0;
}
