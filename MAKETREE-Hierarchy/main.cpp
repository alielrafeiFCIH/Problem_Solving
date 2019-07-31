#include <bits/stdc++.h>

using namespace std;
vector< vector<int> >adj;
vector<int>topolgi;
int ans[100099];
bool visted[100099];
void dfs(int node){

    visted[node] = true;
    int ss = adj[node].size();
    for(int i = 0;i<ss;i++){
        int child  = adj[node][i];
        if(!visted[child]){
            dfs(child);
        }
    }
    topolgi.push_back(node);

}
int main()
{


    int n,k;
    scanf("%d%d",&n,&k);
    int x,y;
    adj = vector< vector<int> >(n+1);

    for(int i = 1;i<=k;i++){
        scanf("%d",&x);
        for(int j = 0;j<x;j++){
            scanf("%d",&y);
            adj[i].push_back(y);
        }
    }
    for(int i=1;i<=n;i++){
        if(!visted[i]){
            dfs(i);
        }
    }


    int p = 0;
    for(int i = n-1;i>=0;i--){
        int s = topolgi[i];
        ans[s]=p;
        p=s;
    }
    for(int i = 1;i<=n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
