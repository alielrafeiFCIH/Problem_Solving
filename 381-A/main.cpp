#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int d=0,s1=0;
    int s = 0;
    int e = n-1;
    int f =1 , sc =0;
    while(s<=e){
        if(a[s]>a[e]){
            if(f){
                s1+=a[s];
                s++;
                f=0;
                sc=1;
            }else{
            d+=a[s];
                s++;
                sc=0;
                f=1;
            }

        }else if(a[s]<a[e]){
          if(f){
                s1+=a[e];
                e--;
                f=0;
                sc=1;
            }else{
            d+=a[e];
                e--;
                sc=0;
                f=1;
            }
        }else{
          if(f){
                s1+=a[s];
                s++;
                f=0;
                sc=1;
            }else{
            d+=a[s];
                s++;
                sc=0;
                f=1;
            }
        }
    }
    printf("%d %d",s1,d);
    return 0;
}
