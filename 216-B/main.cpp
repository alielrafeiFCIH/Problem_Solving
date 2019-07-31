#include <bits/stdc++.h>

using namespace std;

bool visted[101];
vector< vector<int> >adj;
vector<int>connected;
int cont;
bool dfs(int node,int par){
   if(visted[node])
    return true;

    visted[node] = true;

    int ss = adj[node].size();


    for(int i = 0 ;i<ss;i++){

        int child = adj[node][i];

        if(child!=par){
            ++cont;
            if(dfs(child,node))
                return true;

        }
    }


    return false ;
}

int main()
{

memset(visted,false,sizeof(visted));
int n,m;
scanf("%d%d",&n,&m);
adj = vector< vector<int> >(n+1);
int a,b;
for(int i = 0;i<m;i++){
    scanf("%d %d",&a,&b);
    adj[a].push_back(b);
    adj[b].push_back(a);
}
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(!visted[i]){
             cont=0;
            bool status = dfs(i,-1);
            if(status){
                ans+=(cont%2==1);
            }
        }
    }
    if((n-ans)%2 == 1)
        ans++;

    printf("%d",ans);
    return 0;
}
