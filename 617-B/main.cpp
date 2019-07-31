#include <bits/stdc++.h>

using namespace std;
int a[101];
int arr[101];
int main()
{
    int n;
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]){arr[j]=i;j++;}
    }
    int size = j;
    long long ans = 1;
    for(int i=0;i<size-1;i++){
        ans*=(arr[i+1]-arr[i]);
    }
    if(ans==1&&j){
        printf("1");
    }else if(ans==1&&j==0){
        printf("0");
    }else printf("%I64d",ans);
    return 0;
}
