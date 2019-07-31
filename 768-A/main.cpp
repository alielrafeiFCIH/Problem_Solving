#include <bits/stdc++.h>

using namespace std;
const int c = 1e5+1;
int a[c];
int main()
{
    int n;

    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int sum = 0;
    int mn = a[0];
    for(int i = 1 ;i<n-1;i++){
        if(a[i]>mn&&a[i]<a[n-1]){
            sum++;
        }
        mn = min(a[i],mn);
    }
    printf("%d",sum);
    return 0;
}
