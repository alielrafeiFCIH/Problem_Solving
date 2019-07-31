#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("game.in" , "r" , stdin);
    int n;
    scanf("%d",&n);
    long long int x ,y ,z;
    for(int i =0 ;i<n;i++){
        cin>>x>>y>>z;
        if(x*y==z)printf("*\n");
        else if(x+y==z)printf("+\n");
        else if(x-y==z)printf("-\n");
        else printf("none\n");
    }

    return 0;
}
