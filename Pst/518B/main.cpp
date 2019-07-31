#include <bits/stdc++.h>
using namespace std;

int main()
{

long long int n,i,sum=0;
long long int arr[200000];
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
}
sum=abs(arr[0]);
for(i=0;i<n-1;i++){
    sum=sum+abs(arr[i]-arr[i+1]);
}
cout<<sum;
    return 0;
}
