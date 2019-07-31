#include <bits/stdc++.h>

using namespace std;
vector<int>v;
int freq[150];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int number;
    int sum = 0;
    for(int i =0;i<n;i++){
        scanf("%d",&number);
        if(!freq[number]){
            freq[number]++;
            v.push_back(i+1);
            sum++;

        }
    }

    if(sum>=k){
        printf("YES\n");
        for(int i=0;i<k;i++){
            printf("%d ",v[i]);
        }

        printf("\n");
    }else{
        printf("NO");
    }
    return 0;
}
