#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include <limits.h>
using namespace std;

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

typedef long long         ll;
const ll OO = 1e8;
const int iNT_MAX = 1e9;
const double EPS = (1e-7);
int dcmp(double x, double y) {	return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1;	}

#define pb					push_back
#define MP					make_pair
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
typedef long double   	  ld;
typedef vector<int>       vi;
typedef vector<double>    vd;
typedef vector< vi >      vvi;
typedef vector< vd >      vvd;
typedef vector<string>    vs;


struct edge {
	int from, to;
	int  w;
    bool is_deleted ;
    int index;
	edge(int from, int to, int w,int index): from(from), to(to), w(w) ,index(index){
        is_deleted =false;
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

pair<int ,vector<edge> >MST_Kruskal(vector<edge>edgelist , int n){ //O(E LogV)
    UnionFind uf(n);
    vector<edge>edges;
    int mstCost = 0;
    priority_queue<edge>q;

    rep(i,edgelist){
        if(!edgelist[i].is_deleted){
            q.push(edgelist[i]);
        }
    }
    while(!q.empty()){
    edge e = q.top(); q.pop();
        if(uf.union_sets(e.from,e.to)){
         mstCost+=e.w;
         edges.push_back(e);
        }
    }
    if(sz(edges)!=n-1) return make_pair(INT_MAX,vector<edge>());
    return make_pair(mstCost,edges);

}
//pair< int , vector < edge > >  MST_Kruskal(vector<edge>edges , int n) {
//	int cost = 0;
//	priority_queue <edge> q;
//	vector <edge> res;
//
//	UnionFind djSet(n);
//
//	for(int i = 0;i < edges.size();i++){
//		if(!edges[i].is_deleted)
//			q.push(edges[i]);
//	}
//
//	while(!q.empty()){
//		edge curE = q.top();
//		q.pop();
//		if(djSet.union_sets(curE.from,curE.to)){
//			cost +=curE.w;
//			res.push_back(curE);
//		}
//	}
//	if(res.size()!= n-1)
//		return make_pair(INT_MAX,vector <edge>());
//	return make_pair(cost,res);
//}
void solve (int schools,int connections){

    int mst_2 = 1e9+5;
    int from ,to, weight;
    vector <edge> edgelist;
    for(int i=0;i<connections;i++){
        scanf("%d%d%d",&from,&to,&weight);
        from--;to--;
        edge e = edge(from,to,weight,i);
        edgelist.push_back(e);
    }
    pair<int ,vector<edge> > mst_1 = MST_Kruskal(edgelist,schools);
    for(int i =0;i<mst_1.second.size();i++){
            edgelist[mst_1.second[i].index].is_deleted = true;
            pair<int ,vector<edge> > temp = MST_Kruskal(edgelist,schools);
            mst_2 = min(mst_2,temp.first);
            edgelist[mst_1.second[i].index].is_deleted = false;
    }
    cout << mst_1.first <<" "<<mst_2 << endl;

}


using namespace std;

int main()
{
    int n;
    int schools,connections;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&schools,&connections);
        solve(schools,connections);
    }
    return 0;
}
