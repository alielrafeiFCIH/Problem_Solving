#include <bits/stdc++.h>

using namespace std;
vector<vector<int> >adj(52);
int visted[52];
int num=0;
void dfs(int cur){

    visted[cur]=1;
    for(int i=0;i<adj[cur].size();i++){
        int child =adj[cur][i];
        if(!visted[child])
            dfs(child);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ans =1;
    int x,y;
    for(int i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
        }

    for(int i=1;i<=n;i++){

        if(!visted[i]){
            dfs(i);
            num++;
        }

    }

    if(num)
    printf("%I64d",(long long )(pow(2,(n-num))+0.5));
    else printf("1");
    return 0;
}
