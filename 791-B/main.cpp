#include <bits/stdc++.h>

using namespace std;
vector<vector<int> > adj(151000);
bool visted[151000];
bool flag =true;
void dfs (int node,int &cnt_edges,int &cnt_vtx){
        visted[node]=true;
        cnt_edges+=adj[node].size();
        ++cnt_vtx;
    flag = true;
    for(int i=0;i<adj[node].size();i++){
        int child = adj[node][i];
            if(!visted[child])
                dfs(child,cnt_edges,cnt_vtx);
    }



}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    long long ans =0;
    for(int i=1;i<=n;i++){
        int cnt_e = 0,cnt_v=0;
        if(!visted[i]){
            dfs(i,cnt_e,cnt_v);
            if(cnt_e!=(long long)cnt_v*(cnt_v-1)){printf("NO"); return 0;}
        }
    }
    printf("YES");
    return 0;
}
