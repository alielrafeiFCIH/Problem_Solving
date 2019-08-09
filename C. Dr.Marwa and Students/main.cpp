#include <bits/stdc++.h>

using namespace std;
long long freq[200005];
int main()
{
    int n,q,start,end,grade;

    scanf("%d%d",&n,&q);
    int k = 0;
     int ans =-1;
    while(q--){
        scanf("%d%d%d",&start,&end,&grade);
         freq[start-1]-=grade,freq[end]+=grade;
        ans = max(ans,end);

        }
    for(int i=ans+1;i>0;i--){
        freq[i]+= freq[i+1];

    }

    for(int i=1;i<=n;i++)printf("%d ",freq[i]);


    return 0;
}
