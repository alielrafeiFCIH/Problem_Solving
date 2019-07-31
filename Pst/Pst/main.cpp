#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,k=0,a=0,b=0,c=0,d=0,i,x=0,y=0,z=0,f=0,p=0;
long long int arr[10000];
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==2){
        ++k;
    }
    if(arr[i]==3){
        ++a;
    }
    if(arr[i]==6){
        ++b;
    }
    if(arr[i]==1){
        ++d;
    }
    if(arr[i]==4){
        ++c;
    }
    if(arr[i]==5){
        ++f;
    }
    if(arr[i]==7){
        ++p;
    }

}
if(p==0&&f==0){
if(d>0&&k>0&&c>0){
while(k>0&&d>0&&c>0){
cout<<"1 2 4"<<endl;
--k;
--d;
--c;
++x;
}}

if(d>0&&k>0&&b>0)
    while(d>0&&k>0&&b>0){
cout<<"1 2 6"<<endl;
   --k;
--d;
--b;
++y;
    }
if(d>0&&a>0&&b>0){
        while(d>0&&a>0&&b>0){
cout<<"1 3 6"<<endl;
--d;
--a;
--b;
++z;
}}
if(x>0||z>0||y>0){

}
else{
cout<<"-1"<<endl;
}
}else{
cout<<"-1"<<endl;
}
    return 0;
}
