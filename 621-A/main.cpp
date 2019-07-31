#include <bits/stdc++.h>

using namespace std;
long long x[1000005];
int main()
{
    long long answer=0;

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%I64d",&x[i]);
        answer+=x[i];

    }

    if(answer%2==0){cout<<answer;;return 0;}
    int small_odd =0;
    for(int i=0;i<n;i++){
        if(x[i]%2==1&&(small_odd==0||x[i]<small_odd)){
        answer+=small_odd;
        answer-=x[i];
        small_odd=x[i];
        }
    }
    cout<<answer<<endl;
//    printf("%I64d",answer);

    return 0;
}
