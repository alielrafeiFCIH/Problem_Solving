#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[105];
    int b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int j=0;
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        if(b!=0){
            a[j]=b;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
