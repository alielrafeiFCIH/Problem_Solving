#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    if(a==b){
            printf("-1");
    }else{
        printf("%d",max(a.length(),b.length()));
    }
    return 0;
}
