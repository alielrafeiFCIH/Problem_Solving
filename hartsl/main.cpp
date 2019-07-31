#include <bits/stdc++.h>

using namespace std;
int arr[101];
int freq[4000];
int main()
{
    int n,p,days;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&days,&p);
        int answer=0;
        for(int i =0;i<p;i++){
            scanf("%d",&arr[i]);
        }

        for(int iterator=0;iterator<p;iterator++)
        for(int i=1;i<=days;i++){
            if(i%arr[iterator]==0&&i%7!=0&&i%7!=6&&freq[i]!=1)answer++,freq[i]=1;
        }
        memset(freq,0,sizeof(freq));
        printf("%d\n",answer);
    }
    return 0;
}
