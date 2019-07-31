#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("brother.in" , "r" , stdin);
    int  n ;
    scanf("%d",&n);
    int x,y;
    char c;
    for(int i = 0 ;i<n;i++){
        cin>>x;
        cin>>c;
        cin>>y;
        if(c=='+')cout<<x+y<<endl;
        else if(c=='-')cout<<x-y<<endl;

    }

    return 0;
}
