#include <iostream>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,x,a,b;
    int five=0,four=0,three=0,two=0,one=0;
   scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&x);
        if(x==1)one++;
        else if(x==2)two++;
        else if(x==3)three++;
        else if(x==4)four++;
        else five++;
        }
    scanf("%d%d%d",&x,&a,&b);
    int aa=0,bb=0;
    if(a<=one)aa=1;
    else if(a<=one+two)aa=2;
    else if(a<=one+two+three)aa=3;
    else if(a<=one+two+three+four)aa=4;
    else aa=5;

    if(b<=one)bb=1;
    else if(b<=one+two)bb=2;
    else if(b<=one+two+three)bb=3;
    else if(b<=one+two+three+four)bb=4;
    else bb=5;

    while(one--)printf("1 ");
    while(two--)printf("2 ");
    while(three--)printf("3 ");
    while(four--)printf("4 ");
    while(five--)printf("5 ");
    printf("\n");
    if(x==1){
        printf("%d",aa+bb);
    }else if(x==2){
            printf("%d",aa-bb);
    }else{
            printf("%d",aa*bb);
    }
    return 0;
}
