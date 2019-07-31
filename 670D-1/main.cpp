#include <bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000];
int n,k;
bool valid(int t){
    int temp=k;
    for(int i=0 ; i<n ; ++i)if(t*a[i]>b[i])temp-=t*a[i]-b[i];
    return temp>=0;
}


int main()
{
    cin>>n>>k;

    for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
    for(int i=0 ; i<n ; ++i)scanf("%d",&b[i]);
    int t=0;
    while(valid(t))++t;
    cout<<t-1;
    return 0;
}
