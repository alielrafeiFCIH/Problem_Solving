#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int num = 1;
    int flag = 0;
    scanf("%d",&n);
    int temp;
    int ntemp = n;
    int flag2 =1;
     int tempnum;
    for(int i=0;i<n;i++){
        if(flag2){
            num =num + (2*flag);
            tempnum = num;
            temp = ntemp/2;
        }else{
            num-=2;
            tempnum = num;
            temp=ntemp/2;
        }

        flag=1;
        for(int j=0;j<n;j++){
          if(temp==j){
            flag=0;
          }
          if(flag==0&&tempnum)tempnum--,printf("D");
          else printf("*");
        }
        flag=1;
        if(i>=n/2){
            flag2 = 0;
            ntemp+=2;
        }else{
            ntemp-=2;
        }

        printf("\n");
    }
    return 0;
}
