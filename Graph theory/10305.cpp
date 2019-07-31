#include <bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> adj[N];
int visted[N];
vector<int> toplogicalSort;


void dfs(int u){
    visted[u] = 1;
    for(int i = 0 ; i < adj[u].size() ; i++){
        int child = adj[u][i];
        if(visted[child] == 0){
            dfs(child);
        }
    }
    toplogicalSort.push_back(u);
}


int main()
{
    int n, m;
    while(scanf("%d%d",&n,&m)){
        if(n == 0 && m == 0)return 0;

        toplogicalSort.clear();
        for(int i = 0 ; i < N ; i++)
            adj[i].clear();

        for(int i = 0 ; i < N ; i++)
            visted[i] = 0;


        int a , b;
        for(int i = 0 ; i < m ; i++){
            scanf("%d%d",&a,&b);
            adj[a].push_back(b);
        }


        for(int i = 1 ; i <= n ; i++){
            if(visted[i] == 0){
                dfs(i);
            }
        }


        reverse(toplogicalSort.begin(),toplogicalSort.end());

        for(int i = 0 ; i < toplogicalSort.size() ; i++){
            if(i != 0)printf(" ");
            printf("%d",toplogicalSort[i]);
        }
        printf("\n");


    }

    return 0;
}

