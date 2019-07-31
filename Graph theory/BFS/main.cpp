#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];
int dist[N];



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


    for(int i = 1 ; i <= n ; i++){
        dist[i] = -1;
    }

    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0 ; i < adj[u].size(); i++){
            int child = adj[u][i];
            if(dist[child] == -1){
                dist[child] = dist[u] + 1;
                q.push(child);
            }
        }
    }



    return 0;
}

