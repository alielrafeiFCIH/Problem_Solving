#include <bits/stdc++.h>

using namespace std;


vector<vector<int> >adjlist(2002);
vector<int>visted(2002);
vector<int>parents;
int groups=-1;
void bfs(int s) {

	queue<pair<int,int> > q;
	q.push({s,1});


    while (!q.empty()) {
			int cur = q.front().first;
			int curlevel = q.front().second;
			visted[cur]=1;
			groups = max(groups,curlevel);
			q.pop();
			int size = adjlist[cur].size();
			for(int i =0;i<size;i++){
			int child = adjlist[cur][i];
			if (!visted[child])
            q.push({child,curlevel+1});

			}
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int node;
    int i = 1;

    while(n--){
        scanf("%d",&node);
        if(node==-1){
            parents.push_back(i);
        }else{
            adjlist[node].push_back(i);
        }
        i++;
    }
    int size = parents.size();
    for(int i =0;i<size;i++){
            bfs(parents[i]);
    }
    printf("%d",groups);
    return 0;
}
