#include <bits/stdc++.h>
#define lp(i, n)		for(int i=0;i<(int)(n);++i)

using namespace std;
vector< vector<int> >adj;
vector<int> taskes;
bool visted[102];
void dfs(int node ){

    visted[node] = true ;
    int ss = adj[node].size();
    lp(i,ss){
        int child = adj[node][i];
        if(!visted[child])
            dfs(child);
    }
    taskes.push_back(node);
}
int main()
{
    int n,m;
    while(cin>>n>>m && n !=0){
    memset(visted,false,sizeof(visted));
    adj.clear();
    taskes.clear();
    adj = vector< vector<int> >(n+1);
    int a,b;
    lp(i,m){
        scanf("%d%d",&a,&b);
        adj[a].push_back(b);
    }

    for(int i = 1;i<=n;i++){
        if(!visted[i])
        dfs(i);
    }

    int ss = taskes.size();

    for(int i = ss-1 ;i>=0; i--){
        cout <<taskes[i]<<" ";
    }
    cout<<"\n";
    }
    return 0;
}
