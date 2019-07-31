#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int arr[100];
int n,x=0,y=0,mn=0,mx=0;
cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    y=&arr[0]-min_element(arr,arr+n);
    x=&arr[0]-max_element(arr,arr+n);
    y=abs(y);
    x=abs(x);
        if(x>y){

        }else{


        }



   mx=0-x;
   mn=(n-1)-y;
   cout<<abs(mn)+abs(mx)<<endl;


    return 0;
}
