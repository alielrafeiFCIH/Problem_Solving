#include <bits/stdc++.h>

using namespace std;
bool compare(int a , int b){
 return a>b;
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    while(scanf("%d",&n)&&n){
        int a[100];
        for(int i = 0 ;i<n;i++){
            scanf("%d",&a[i]);
        }
        int cont = 0;
        int count = 0;
        sort(a,a+n,compare);
        for(int i = 0 ;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                int x = gcd(a[i],a[j]);
                if(x==1)cont++;
                count++;
            }
        }

        if(cont){
        printf("%.6f\n",sqrt(6.000000*(n*(n-1)/2)/cont));
        }else printf("No estimate for this data set.\n");
    }

    return 0;
}
