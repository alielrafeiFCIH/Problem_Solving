#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[10][10];
    scanf("%d",&n);
    for(int i = 0 ;i<10;i++){
            a[0][i]=1;
            a[i][0]=1;
    }

    for(int i = 1 ;i<10;i++){
        for(int j = 1 ;j<10;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }

    int m=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
           if(a[i][j]>=m){
            m=a[i][j];
           }
        }
    }
    printf("%d",m);
    return 0;
}
