#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string arr;
cin>>arr;
int n,x,y,k=0;
cin>>n;
while(n!=0){
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(arr[i]==arr[i+1]){
            ++k;
        }
    }
    cout<<k<<endl;
    --n;
    k=0;
}
return 0;
}
