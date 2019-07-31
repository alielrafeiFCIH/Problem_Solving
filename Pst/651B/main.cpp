#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int x;
int n,i,c=0;
    cin>>n;
    for(i=0;i<n;i++){
            c=0;
       cin>>x;
       if(x>100000){
        for(int j=2;j<1000000;j++){
            if(x%j==0){++c;}
            if(c==2)break;
        }}
        else{
            for(int j=2;j<x;j++){
            if(x%j==0){++c;}
            if(c==2)break;
        }}
        if(c==1){
            printf("YES\n");
        }else{

        printf("NO\n");
        }

    }
    return 0;
}
