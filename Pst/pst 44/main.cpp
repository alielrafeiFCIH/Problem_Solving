#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    int arr[100005];
    int worm[100006];
int main()
{
    int m,n,w=1,q;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i =0 ; i<n;i++){
    for(int j=0;j<arr[i];j++){
        worm[w]=i+1;
        ++w;
    }
}
cin>>m;
for(int i=0;i<m;i++){
    cin>>q;
    cout<<worm[q]<<endl;
}

    return 0;
}
