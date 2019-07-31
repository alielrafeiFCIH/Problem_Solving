#include <bits/stdc++.h>

using namespace std;

int main()
{   int a,x,y;
    scanf("%d%d%d",&a,&x,&y);
    if(abs(y)%a==0){
        printf("-1");
    }else{

        int level =y/a;

        if(level==0){
            if(-a<2*x&&x*2<a){
                printf("1");
            }else{
                printf("-1");
            }
        }else if(level%2==1){
         if(-a<2*x&&x*2<a){
                 int pos =((level*3)/2);
                printf("%d",pos+1);
            }else{
                printf("-1");
            }

        }else{
            if(-a<x&&x<0){
                int pos =((level*3)/2);
                printf("%d",pos);
            }else if(x>0&&x<a){
                int pos = ((level*3)/2);
                printf("%d",pos+1);
            }else{
                printf("-1");
            }
        }
    }
    return 0;
}
