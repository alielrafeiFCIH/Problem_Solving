#include <bits/stdc++.h>

using namespace std;
int freq[200005];
int main()
{
    int n;
    scanf("%d",&n);
    n*=2;

    int max_socks_num =0,num_socks=0,socks;
    for(int i=0;i<n;i++){
        scanf("%d",&socks);
        if(!freq[socks]){
            freq[socks]++;
            num_socks++;
            max_socks_num=max(max_socks_num,num_socks);
        }else{
            num_socks--;
        }
    }
    printf("%d",max_socks_num);
    return 0;
}
