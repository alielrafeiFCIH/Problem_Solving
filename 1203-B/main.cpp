#include <bits/stdc++.h>

using namespace std;
int a[40004];
int main()
{
    int q;
    int n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        n = n*4;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        bool flag = true;
        int ans = a[0]*a[n-1];
        for(int i =1,j=n-2;i<n/2;i+=2,j-=2){
            if(a[i]*a[j]!=ans||a[i]!=a[i-1]||a[j]!=a[j+1]){
                flag= false;
                break;
            }
        }
        !flag?printf("NO\n"):printf("YES\n");
    }
    return 0;
}
