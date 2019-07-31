#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3];
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
    sort(a,a+3);
    sort(b,b+3);
    bool temp=true;
    for(int i=0 ; i<3 ; ++i)if(a[i]>100)temp=false;
    for(int i=0 ; i<3 ; ++i)if(b[i]>100)temp=false;
    if(a[0]*a[0]+a[1]*a[1]!=a[2]*a[2] || b[0]*b[0]+b[1]*b[1]!=b[2]*b[2] )temp=false;
    if(a[0]!=b[0] || a[1]!=b[1] || a[2]!=b[2])temp=false;
    temp ? puts("YES") : puts("NO") ;
    return 0;
}
