#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , h,sum=0,x;
    scanf("%d%d",&n,&h);
    for(int i =0 ;i<n;i++){
        scanf("%d",&x);
        if(x>h){
        sum+=2;
        }else{
        sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}
