#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool odd(int a){return(a%2==1);};
int Max(int a,int b){
    if(a>b);
return a;
return b;

}
bool is_alpha(char c){

return((c>='a'&&c<='z')||(c>='A'&&c<='Z'));

}
int main()
{
    int arr[5]={1,2,1,1,3};
char c;
cin>>c;
if(is_alpha(c))cout<<"yes"<<endl;
int n,y,mx=-1,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>y;
    mx=Max(y,mx);
}
cout<<mx<<endl;
int z=count(arr,arr+5,1);
cout<<z<<endl;
int counter = count_if(arr,arr+5,odd);
cout<<counter<<endl;
    return 0;
}
