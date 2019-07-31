#include <bits/stdc++.h>

using namespace std;
int ans ;
int a[15];
int bit = 1;
int n,l,r,x;
int power(int number ,int expo){
    int temp;
    if(expo==0)
        return 1;
    temp = power(number,expo/2);
    if(expo%2==0)
        return temp*temp;
    else
        return number*temp*temp;
}
bool valid (int sz,int tempans,int mn,int mx){
    int diff =mx-mn;
   if(tempans>=l&&tempans<=r&&diff>=x)
    return true;


    return false;
}
int solve(){
    int sz=0,temp=bit;
    int mn=1e9,mx=-1,tempans =0;

    while(temp){
        if(temp&1){
            tempans +=a[sz];
            mn =min(mn,a[sz]);
            mx = max(mx,a[sz]);

        }
        temp = temp>>1;
        sz++;
    }

    if(valid(sz,tempans,mn,mx))
        return 1;
    return 0;
}
int main()
{

    scanf("%d%d%d%d",&n,&l,&r,&x);
    int combinations=power(2,n);
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<combinations-1;i++){
            ans+=solve();
            bit++;
    }
    printf("%d",ans);

    return   0;
}
