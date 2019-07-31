#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a1,a2,a3,b1,b2,b3,k,w;
   scanf("%d%d",&k,&w);
   scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
    int sum1=0,sum2=0,sum3=0,sum4=0,w1=0,w2=0,w3=0,w4=0;

    sum1=b1+b2+b3;
    sum2=b1+b2;
    sum3=b1+b3;
    sum4=b2+b3;
    w1=a1+a2+a3;
    w2=a1+a2;
    w3=a1+a3;
    w4=a2+a3;
//    printf("%d %d\n",sum2,w2);
    if(b1>=k&&a1<=w){
      printf("YES");
    }else if(sum1>=k&&w1<=w){
       printf("YES");
    }else if(sum2>=k&&w2<=w){
       printf("YES");
    }else if(sum3>=k&&w3<=w){
        printf("YES");
    }else if(sum4>=k&&w4<=w){
        printf("YES");
    }else if(b2>=k&&a2<=w){
        printf("YES");
    }else if(b3>=k&&a3<=w){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
