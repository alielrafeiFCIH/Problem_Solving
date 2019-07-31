#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vp,vd,t,f,c;
    scanf("%d%d%d%d%d",&vp,&vd,&t,&f,&c);
    int count=0;
    int miles = 0;
    double  covered_miles =0 ;
    if(vp>vd){printf("0");return 0;}
    covered_miles = vp*t;
    while((covered_miles+=(vp*covered_miles)/(vd-vp))<c){
        count++;
        covered_miles += (covered_miles/vd + f)*vp;
    }
    cout<<count;
    return 0;
}
