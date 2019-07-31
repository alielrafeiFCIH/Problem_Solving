#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int c =0;
    scanf("%d%d",&n,&m);
    if(n<m){
        c=n;
    }else{
        c=m;
    }
    if(c%2==0){
        printf("Malvika");
    }else{
        printf("Akshat");
    }
//cin>>n>>m;
//if(n==2&&m==2){
//    printf("Malvika");
//return 0;
//}
//    if(n!=1&&m!=1){
//            while(ans!=0){
//        if(m>n){
//            m-=1;
//            ans=n*m;
//            c++;
//        }else if(m<n){
//        n-=1;
//        ans=n*m;
//        c++;
//        }else{
//        n-=1;
//        ans=n*m;
//        c++;
//        }
//        }
//        if(c%2==0){
//                printf("Malvika");
//
//        }else{
//
//        printf("Akshat");
//        }
//    }else{
//        printf("Akshat");
//    }
    return 0;
}
