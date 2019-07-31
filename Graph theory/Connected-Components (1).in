#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];
int visted[N];

void dfs(int u){
    visted[u] = 1;
    for(int i = 0 ; i < adj[u].size() ; i++){
        int child = adj[u][i];
        if(visted[child] == 0){
            dfs(child);
        }
    }
}


int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    int a , b;
    for(int i = 0 ; i < m ; i++){
        scanf("%d%d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


    int connectedComponents = 0;
    for(int i = 1 ; i <= n ; i++){
        if(visted[i] == 0){
            connectedComponents++;
            dfs(i);
        }
    }

    return 0;
}

