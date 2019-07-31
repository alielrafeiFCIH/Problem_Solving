#include <bits/stdc++.h>

using namespace std;
long long  a[100005];
int main()
{
    int n,x;
    long long  h = 0;
    scanf("%d%d",&n,&x);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i = 0 ;i<n;i++){
        if(x<=1){
            x = 1;
            h+=x*a[i];
        }else{
        h+=x*a[i];
        x--;
        }

    }
    cout<<h;
    return 0;
}
