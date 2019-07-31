#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int i , k=0 ,p,n;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>arr[i];
    p=i;
   }
   cout<<p<<endl;
   for(i=p+1;i<n;i++){
    cin>>arr[i];
   }
   sort(arr,arr+n);
   for(i=0;i<n+n;i++){
    if(arr[i]=i+1){
        ++k;
    }
    cout<<arr[i]<<" ";
   }
   if(k==n){
    cout<<"I become the guy."<<endl;
   }else{
       cout<<"Oh, my keyboard!"<<endl;
   }


    return 0;
}
