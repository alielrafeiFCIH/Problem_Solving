#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    while(n!=0){
        cin>>x;
        int c=0;
       int  mask=1;
for(int i=0;i<sizeof(int)*8;i++){
    if(x&mask){
        ++c;}
    mask=mask<<1;
}
cout<<c<<endl;
        --n;
    }
    return 0;
}
