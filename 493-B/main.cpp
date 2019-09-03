#include <bits/stdc++.h>

using namespace std;
typedef vector<pair<int,int>>vii;
typedef vector<int>vi;
typedef long long ll;

int main()
{
    vi first, second;
    int n,x;
    scanf("%d",&n);
    ll sum_f=0,sum_s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x<0){
            sum_s+=x*-1;
            second.push_back((x*-1));
        }else{
            sum_f+=x;
            first.push_back(x);
        }
    }

    if(sum_f==sum_s){
        int range =min(first.size(),second.size());
        for(int i=0;i<range;i++){
            if(first[i]>second[i]){
                printf("first");
                return 0;
            }
            if(second[i]>first[i]){
                printf("second");
                return 0;
            }
        }
        if(x<0)printf("second");
        else printf("first");

    }else{
        sum_f>sum_s?printf("first"):printf("second");
    }
    return 0;
}
