#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int g,x,i,z=0,j;
char cpy;
cin>>g;
x=g*g;
char str[100];
while(g!=0){
    for(i=0;i<x;i++){
        cin>>str[i];}
        for(i=0;i<x;i+=g){
            cpy=str[i];
            for(j=g-1,z=i+g;j>=0;--j){
                str[z]=str[j];
                str[j]=cpy;
                ++z;
                cpy=str[z];
            }
        }



for(i=0;i<x;i++){
    cout<<str[i];
}
printf("\n");
x=0;
cin>>g;
}

    return 0;
}
