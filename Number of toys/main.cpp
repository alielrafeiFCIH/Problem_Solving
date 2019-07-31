#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n,a,cont1=0,cont2=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
    scanf("%d",&a);
    if((a&1)!=1){
        cont1++;
    }else{
        cont2++;
    }
 }

// double b;
// scanf("%d",&n);
// for(int i=0;i<n;i++){
//    scanf("%d",&a);
//    cin>>b;
//    if(b<50.0){
//        ans+=a;
//    }
// }
 printf("%d",min(cont1,cont2));
    return 0;
}
