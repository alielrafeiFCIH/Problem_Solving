#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   scanf("%d",&n);
   int a[6000];
   int b[4],w=0;
   for(int i = 0 ;i<4;i++)b[i]=0;

   for(int i = 1 ; i <= n;i++){
    scanf("%d",&a[i]);
    if(a[i]==1){
        b[1]++;
    }else if(a[i]==2){
    b[2]++;
    }else{
    b[3]++;
    }
   }
//   printf("%d %d %d\n",b[1],b[2],b[3]);
   w = min(b[3],min(b[1],b[2]));
   if(!w){
   printf("%d",w);
   return 0;
   }
   printf("%d\n",w);
   int c1=0,c2=0,c3=0;
   for(int i = 0;i<w;i++){
        for(int j =1 ;j<=n;j++){
            if(a[j]==1&&c1==0){
                c1=j;
                a[j]=0;

            }else if(a[j]==2&&c2==0){
                c2=j;
                a[j]=0;

            }else if(a[j]==3&&c3==0){
                c3=j;
                a[j]=0;

            }
        }
        if(c1!=0&&c2!=0&&c3!=0){
            printf("%d %d %d\n",c1,c2,c3);
        }
        c1=0;
        c2=0;
        c3=0;
   }

    return 0;
}
