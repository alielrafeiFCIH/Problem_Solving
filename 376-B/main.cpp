#include <bits/stdc++.h>

using namespace std;

int main()
{
    int people[101];
    memset(people,0,sizeof(people));
    int n;
    int m;
    int sum =0;
    int a,b,c;
    scanf("%d%d",&n,&m);

    for(int i=0;i<m;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(people[a]==0)people[a]+=c,people[b]-=c;
        else people[a]+=c,people[b]-=c;
    }
    for(int i=0;i<101;i++){
        if(people[i]>=0)
        sum+=people[i];
    }
    printf("%d",sum);
    return 0;
}
