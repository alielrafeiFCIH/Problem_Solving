#include <bits/stdc++.h>

using namespace std;
//waggia

int main()
{
    int x,y,x1,y1;
    scanf("%d %d %d %d",&x,&y,&x1,&y1);
    int n;
    scanf("%d",&n);
    set<pair<int,int> >adj;
    for(int i =0 ;i<n;i++){
        int r,a,b;
        scanf("%d %d %d",&r,&a,&b);
        for(int i = a;i<=b;i++)
            adj.insert(make_pair(r,i));
    }
    map<pair<int,int>,int>len;
    queue<pair<int,int> >q;
    pair<int,int>cur;
    int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
    int dep = 0,sz = 1;
    q.push(make_pair(x,y));
    for(;!q.empty();dep++,sz=q.size()){
        while(sz--){
            cur = q.front(); q.pop();
            for(int i = 0;i<8;i++){
                int xx = cur.first+dx[i];
                int yy = cur.second+dy[i];
                pair< int ,int >temp ;
                temp = { xx , yy};

                if(adj.find(temp)== adj.end()||len[temp]!=0)
                    continue;

                q.push(temp),len[temp]=dep+1;
                if(temp.first==x1 && temp.second==y1){
                    cout<<dep+1;
                    return 0;
                }


            }
        }
    }
    printf("-1");
    return 0;
}
