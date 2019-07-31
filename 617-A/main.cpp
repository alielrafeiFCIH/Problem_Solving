#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,pos=0;
    scanf("%d",&n);
//    while(n!=0){
//        if(n>=5){
//            n-=5;
//            pos++;
//        }else if(n>=4){
//            n-=4;
//            pos++;
//        }else if(n>=3){
//            n-=3;
//            pos++;
//        }else if(n>=2){
//            n-=2;
//            pos++;
//        }else if(n>=1){
//            n-=1;
//            pos++;
//        }
//    }


    printf("%d",(int)ceil((double)n/5.0));
    return 0;
}
