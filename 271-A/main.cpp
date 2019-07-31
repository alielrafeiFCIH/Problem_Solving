#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check(int year){
    int a[10];
    int tmp=0;
    int c=0;
    for(int i=0;i<10;i++)a[i]=0;

    for(int i=0;i<4;i++){
        tmp=year%10;
        a[tmp]++;
        year=year/10;
    }
  for(int j=0;j<10;j++){
    if(a[j]>1){
        c=1;
        break;
  }
  }
    if(c==1){
        return 0;
    }else{
        return 1;
    }
}
int main()
{
    int year;
    scanf("%d",&year);
    for(int i=year+1;i<9000000;i++){
        if(check(i)==1){
            printf("%d",i);
            return 0;
        }
    }

    return 0;
}
