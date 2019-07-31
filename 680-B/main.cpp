#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,pos;
   int a[102];
   scanf("%d",&n);
    scanf("%d",&pos);

    for(int i = 0;i<n;i++)
        scanf("%d",&a[i]);
      pos = pos - 1 ;
      int p1=pos-1,p2=pos+1,c=0;
      if(a[pos])c++;
      while(p1>=0||p2<n){

        if(abs(pos-p1)==abs(pos-p2)&&p1>=0&&p2<n){
            if(a[p1]&&a[p2]){
                c+=2;
            }
            p1--;
            p2++;
        }else{
            if(p1>=0){
                if(a[p1])c++;
                p1--;
            }
            if(p2<n){
                if(a[p2])c++;
                p2++;
            }
        }

      }
      printf("%d",c);
    return 0;
}
