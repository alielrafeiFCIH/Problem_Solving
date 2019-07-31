#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Reverse(int a,int b,int arr[1009]){
    int j;
    int tmp;
    for(int i=a,j=b;i<j&&j>i;i++,j--){
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
}
int main()
{
    int arr[1000];
    int n,a,b,c,d;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Reverse(a,b,arr);
    Reverse(c,d,arr);
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
