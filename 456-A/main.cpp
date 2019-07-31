#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
        scanf("%d %d",&a,&b);
        if(b<a){printf("Happy Alex");
        return 0 ;
    }
    }
    printf("Poor Alex");
    //another solution
//    int a[100005];
//    int b[100005];
//
//    if(n==1){
//        printf("Poor Alex");
//        return 0 ;
//    }
//
//    for(int i = 0;i<n;i++){
//        scanf("%d %d",&a[i],&b[i]);
//
//    }
//    for(int i = 0 ;i<n;i++){
//        if(a[i]!=b[i]){
//            if(a[i]<b[i]){
//                printf("Happy Alex");
//                return 0 ;
//            }
//        }
//    }
//    printf("Poor Alex");


    return 0;
}
