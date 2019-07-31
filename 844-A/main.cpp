#include <bits/stdc++.h>

using namespace std;
int a[1000000];
int main()
{
int n;
cin>>n;
    if((n<7&&n!=4)||n==9||n==13||n==10){
        cout<<"-1"<<endl;
        return 0;
    }
    while(n%7!=0){
        cout<<"4";
        n-=4;
    }
    while(n>0){
        cout<<"7";
        n-=7;
    }
    return 0;
}
