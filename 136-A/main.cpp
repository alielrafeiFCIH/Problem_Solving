#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 int a[100];
 int b[100];
 scanf("%d",&n);
 for(int i = 1 ;i<=n;i++){
    scanf("%d",&a[i]);
    b[a[i]]=i;

 }
 for(int i=1;i<=n;i++){
    printf("%d ",b[i]);
 }
    return 0;
}
