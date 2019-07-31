#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x,sum;
    scanf("%d",&n);
    double perc;
    double average;
    int a[1001];
    for(int i =0;i<n;i++){
        scanf("%d",&k);
        sum = 0;
        for(int j = 0 ;j<k;j++){
            scanf("%d",&x);
            a[j]=x;
            sum+=x;
        }
        average = (double)sum/(double)k;
        int c = 0;
        for(int j = 0 ;j<k;j++){
            if(a[j]>average){
                c++;
            }
        }
        perc = 100*((double)c/(double)k);
        printf("%.3f%\n",perc);
    }
    return 0;
}
