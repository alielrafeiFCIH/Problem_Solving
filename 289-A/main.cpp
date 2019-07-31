#include <bits/stdc++.h>
#define lp for(int i=0;i<(int)n;i++)
//BigWiggia
using namespace std;

int main()
{
    int n ,k;
//    set<int>s;
int covered = 0;
    scanf("%d %d",&n,&k);
    for(int i = 0;i<n;i++){
            int a,b;
        scanf("%d %d",&a,&b);
        covered += (b-a+1);
//        for(int i =  a ;i<=b;i++){
//            s.insert(i);
//        }
    }

//    int covered = s.size();

    if(covered<k){
       printf("%d",k-covered);
    }else if(covered>k){
        if(covered%k==0){
            printf("0");
        }else{
       int x = covered%k;
       int ans = (covered-x+k)-covered;
       printf("%d",ans);
       }
    }else{
        printf("0");
    }
    return 0;
}
