#include <bits/stdc++.h>

using namespace std;

int group;

vector< set<int> > adj(105);
vector<bool> visited(105);


int main()
{
    int n,m;scanf("%d%d",&n,&m);
    int x,y;
    int b[101]={0};
    for(int i =0;i<m;i++){
        scanf("%d%d",&x,&y);
        adj[x].insert(y);
        adj[y].insert(x);

    }
    vector<int>v;
    while(1){
          for(int i =1;i<=n;i++){
              if(adj[i].size()==1){
                v.push_back(i);
              }
            }
            for(int i =0;i<v.size();i++){
                set<int>::iterator it = adj[v[i]].begin();
                adj[v[i]].clear();
                adj[*it].erase(v[i]);
            }
            if(v.size())group++;
            else break;
            v.clear();
    }
    cout<<group;
    return 0;
}
