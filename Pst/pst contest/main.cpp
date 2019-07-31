#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,i,a;
char arr[12];
cin>>n;
for(i=0;i<n;i++){
        cin>>arr;
        int r=strlen(arr);
        sort(arr,arr+r);
do{

cout<<arr<<endl;

}while(next_permutation(arr,arr+r));
cout<<endl;

}
        return 0;
}
