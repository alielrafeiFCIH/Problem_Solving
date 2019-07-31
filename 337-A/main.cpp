#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[50];
int b[50];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++){
            scanf("%d",&a[i]);
        }
       sort(a,a+m);
       int mn=1001;
       for(int i=0;i<=m-n;i++){
        mn=min(mn,a[n+i-1]-a[i]);
       }
    printf("%d",mn);
    return 0;
}
