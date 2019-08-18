#include <bits/stdc++.h>
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef long long ll;
typedef pair<int, int> pii;
double calc_distance(pair<int,int> a,pair<int,int>b){
    return sqrt((double)(a.first-b.first)*(double)(a.first-b.first) + (double)(a.second-b.second)*(double)(a.second-b.second));
}
struct edge {
	int from, to;
	double  w;
	edge(int from, int to, double w): from(from), to(to), w(w){

	}

	bool operator < (const edge & e) const {
		return w > e.w;	// STL priority_queue need it > , or modify data -ve, or use paprmeter less
	}
};

struct UnionFind{
    vi rank,parent;
    int forests ;

    UnionFind(int n){
    rank = vi(n),parent = vi(n);
    forests = n;
    lp(i,n)parent[i]=i,rank[i]=1;

    }
    int find_set(int x){
        if(x==parent[x])return x;
        return parent[x] = find_set(parent[x]);
    }
    void link(int x,int y){
        if(rank[x]>rank[y])swap(x,y);
        parent[x]=y;
        if(rank[x]==rank[y])rank[y]++;
    }
    bool union_sets(int x,int y){
        x = find_set(x),y = find_set(y);
        if(x!=y){
            link(x,y);
            forests--;
        }
        return x!=y;
    }

};
int a;
pair<double ,vector<edge> >MST_Kruskal(vector<edge>edgelist , int n){ //O(E LogV)
    UnionFind uf(n);
    vector<edge>edges;
    double mstCost = -1;
    priority_queue<edge>q;

    rep(i,edgelist){
        q.push(edgelist[i]);
    }
    int edge_count = 0;
    while(edge_count!=n-a){
    edge e = q.top(); q.pop();
        if(uf.union_sets(e.from,e.to)){
         mstCost=max(e.w,mstCost);
         edges.push_back(e);
         edge_count++;
        }

    }
    //if(sz(edges)!=n-1) return make_pair(1e9,vector<edge>());
    return make_pair(mstCost,edges);

}
int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&n);
        vii v;
        lp(i,n){
            scanf("%d%d",&x,&y);
            v.push_back(make_pair(x,y));
        }
        double distance = 1e10;
        vector<edge> edgelist ;
        lp(i,n){
            for(int j=i+1;j<n;j++){
                edge e = edge(i,j,calc_distance(v[i],v[j]));
                edgelist.push_back(e);
            }
        }
        pair<double ,vector<edge> > ans = MST_Kruskal(edgelist,n);
        printf("%.2f\n",ans.first);

    }
    return 0;
}
