#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int arr[100]={0};
    int n,m,k=1,a,x,j=0,z=0,f,i;
    int b[100];
    cin>>n>>m;
    for(i=0;i<m;i++){
        arr[i]=i+1;
    }
    for(x=0;x<n;x++){
    cin>>a;
    int b[1000];
    for(i=0;i<a;i++){
            cin>>b[i];
        for(j=0;j<m;j++){
             if(b[j]==arr[j]){
                arr[0];
             }

        }
    }
    }
    for(z=0;z<m;z++){
    if(arr[z]!=0){
    f=1;
    }else{

    f=0;
    }}
    if(f==1){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

    return 0;
}
