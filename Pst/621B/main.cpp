#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
   int  arr[200000][2];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    for(i=0;i<n;i++){
            for(int j=i;j<n-1;j++){
        if(abs(arr[i][0]-arr[j+1][0])==abs(arr[i][1]-arr[j+1][1])){
            ++c;
        }}

    }
    cout<<c<<endl;
    return 0;
}
