#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long v,x;
     cin>>v>>x;
    long long mid = v/2;
    if(v%2!=0)mid+=1;

    if(x<=mid){
        cout<<2*x-1;
    }else{
        cout<<(x-mid)*2;
    }

    return 0;
}
