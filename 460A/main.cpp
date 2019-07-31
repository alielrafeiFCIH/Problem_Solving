#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cont=0,n,m,day=0,con=1;
    cin>>n>>m;
    while(n){
        n=n-1;
        ++cont;
        ++day;
        if(day==m){
            ++n;
            day=0;
        }
    }
    cout<<cont<<endl;
    return 0;
}
