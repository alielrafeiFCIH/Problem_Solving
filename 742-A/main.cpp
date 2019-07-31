#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }else{
           int ans[4] ={8,4,2,6};
        printf("%d",ans[(n-1)%4]);
    }


    return 0;
}
