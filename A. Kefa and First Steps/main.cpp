#include <bits/stdc++.h>

using namespace std;
int len[1000006];

int main()
{
int n;
int ans=1;
scanf("%d",&n);
int sum=1;
for(int i=0;i<n;i++){
    scanf("%d",&len[i]);

}
for(int i =1 ;i<n;i++){
    if(len[i-1]<=len[i]){
        sum++;
    }else{
        sum=1;
    }
    if(ans<sum){
        ans=sum;
        }
}
printf("%d",ans);
    return 0;
}
