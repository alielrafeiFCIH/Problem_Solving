#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("hats.in" , "r" , stdin);
    int t;scanf("%d",&t);
    int a[100006];
    int n;
    for(int i =0;i<t;i++){
        scanf("%d",&n);
        for(int j = 0;j<n;j++){
            scanf("%d",&a[j]);
        }
        long long int sum = 0;
        int r[11]={0};
        int l[11]={0};
        for(int k=1;k<n;k++)r[a[k]]++;
        for(int k=0;k>=0;k--)l[a[k]]++;
        for(int j = 1;j<n;j++){
            for(int k = 1;k<=10;k++){
                if(a[j]>k){
                    sum = sum + (r[k]*l[k]);
                }
            }
            r[a[j]]--;
            l[a[j]]++;
        }
        cout<<sum<<endl;

    }
    return 0;
}
