#include <bits/stdc++.h>

using namespace std;
int arr[100005];
int freq[100005];
int num[100005];
int main()
{
    int n,m,size=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);

    }

    for(int i=n;i>=1;i--){
        if(!freq[num[i]]){
            arr[i]=arr[i+1]+1;
            freq[num[i]]++;
        }else{
            arr[i]+=arr[i+1];
        }
    }

    int q;
    for(int i=0;i<m;i++){
        scanf("%d",&q);
        printf("%d\n",arr[q]);
    }

    return 0;
}
