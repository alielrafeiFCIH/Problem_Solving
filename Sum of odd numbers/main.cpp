#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
//   int a,b;
//  long long  int sum=0;
//   scanf("%d%d",&a,&b);
//    int i=0;
//    if(a%2==0){
//        a++;
//    }
//    for(i=a;i<=b;i+=2){
//        sum+=i;
//    }
////    printf("%lld",sum);
//int    e,f,c;
//scanf("%d%d%d",&e,&f,&c);
//int ans=0,dif2;
//double dif;
//int sumofe=e+f;
// dif=ceil((double)sumofe/c);
//    dif2=sumofe/c;
//    ans+=dif;
//while(1){
//        if(dif!=1){
//    dif=ceil(dif/c);
//    ans+=dif;
//        }else{
//            if(dif!=1){
//        ans+=dif2;}
//        break;
//        }
//    dif2=dif2/c;
////    printf("%d",dif2);
//}
//
//printf("%d",ans);
int n,cont=0,ans=0;
string s;
string s2;
cin>>s;
cont=s.length();
for(int i=cont-1,j=1;i>=0;i--,j*=2){
    if(s[i]=='1'){
        ans=ans+(j*1);
    }else if(s[i]=='0'){
             ans=ans+(j*0);
             }
}
printf("%d",ans);
//int cnt = __builtin_popcount(n);
//
//   printf("%d",cnt);
//   while(n!=0){
//    if(n&mask==1){
//        ++cont;
//    }
//
//    n=n>>1;
//   }
//      printf("%d",cont);

    return 0;

}
