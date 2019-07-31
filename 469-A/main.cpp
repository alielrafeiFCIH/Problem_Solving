#include <bits/stdc++.h>

using namespace std;
map <int,int> a;
int main()
{
   int n,p,num,flag=0;
   scanf("%d%d",&n,&p);

   for(int i=0;i<p;i++){
   scanf("%d",&num);
   a[num]++;
   }
   scanf("%d",&p);
   for(int i=0;i<p;i++){
   scanf("%d",&num);
   a[num]++;
   }


   if(a.size()==n){
        printf("I become the guy.");
   }else{
        printf("Oh, my keyboard!");
   }
    return 0;
}
