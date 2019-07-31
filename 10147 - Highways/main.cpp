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

	edge(int from, int to, int w): from(from), to(to), w(w) {}

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

//vector<vi> connected_componenets(){
//    vector<vi> list (sz(parent));
//    lp(i,sz(parent)){
//        list[find_set(i)].push_back(i);
//    }
//    return list;
//
//}

pair<int ,vector<edge> >MST_Kruskal(vector<edge>edgelist , int n){ //O(E LogV)
    UnionFind uf(n);
    vector<edge>edges;
    int mstCost = 0;
    priority_queue<edge>q;

    rep(i,edgelist)q.push(edgelist[i]);

    while(!q.empty()){
    edge e = q.top(); q.pop();
        if(uf.union_sets(e.from,e.to)){
         mstCost+=e.w;
         edges.push_back(e);
        }
    }
    if(sz(edges)!=n-1) return make_pair(-OO,vector<edge>());
    return make_pair(mstCost,edges);

}
pair<int ,vector<edge> >MST_Kruskal_1(vector<edge>edgelist,UnionFind &uf,int towns,int n){ //O(E LogV)

    int mstCost = 0;
    priority_queue<edge>q;
    vector<edge>edges;
    rep(i,edgelist)q.push(edgelist[i]);

    while(!q.empty()&&n<towns-1){
    edge e = q.top(); q.pop();
        if(uf.union_sets(e.from,e.to)){
         mstCost+=e.w;
         edges.push_back(e);
         n++;
        }

    }
    //printf("%d\n",sz(edges));
//    if(sz(edges)!=n-1) return make_pair(-OO,vector<edge>() );
    return make_pair(mstCost,edges);
}






// Find MST value & edges. adjMax is initialized by OO
pair<int, vector<edge> > PRIM_MST1(vector< vi > adjMax)	// O(n^2)
{
	int curNode = 0, n = sz(adjMax), mini;
	int mind, mstCost = 0;

	vi vis(n, 0), prev(n);
	vi dist(n, OO); // 1) dist[i]: Minimum value to connect i to current built tree
	vector<edge> edges;			 // Save MST edges

	lp(k, n-1)
	{
		vis[curNode] = 1, mind = OO, mini = -1;
		lp(i, n)
		{
			if(!vis[i])
			{
				if(adjMax[curNode][i] < dist[i])	//2) Update if i can reach tree with a new Minimum value
					dist[i] = adjMax[curNode][i], prev[i] = curNode;

				if (dist[i] < mind) mind = dist[i], mini = i;	//3) Select minimum EDGE value
			}
		}
		if(mini == -1)	break;	// 4) check if graph is disconnected
		// 5) update edges and cost of mst
		edges.push_back( edge(prev[mini], mini, adjMax[prev[mini]][mini] ) );
		curNode = mini, mstCost += dist[curNode];
	}

	if( sz(edges) != n-1)	return make_pair(OO, vector<edge>() );
	return make_pair(mstCost, edges);
}

double distance(int x1,int y1,int x2,int y2)
{
    return (sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ));
}













pair<int, vector<edge> > PRIM_MST2(vector< vector< edge > > adjList) // O(E logV)
{	// edge x-->y & y-->x	must be in the adjList
	int n = sz(adjList), mstCost = 0;
	vi vis(n, 0);
	vector<edge> edges;			 // Save MST edges

	priority_queue<edge> q;		// 1) priority_queue to sort edges
	q.push( edge(-1, 0, 0) );

	while( !q.empty() ) {
		edge e = q.top();		q.pop();
		if( vis[e.to] )	continue;
		vis[e.to] = 1;
		mstCost += e.w;
		if(e.to)	edges.push_back( e );	// 2) remove min element & update cost/list

		rep(j, adjList[e.to]) {				// 3) Iterate on adjacent edges & add new edges, using e.to as src
			edge ne = adjList[e.to][j];
			if( !vis[ ne.to] )				// 4) If added will cause cycle
				q.push( ne );
		}
	}

	if( sz(edges) != n-1)	return make_pair(-OO, vector<edge>() );
	return make_pair(mstCost, edges);
}
using namespace std;

int main()
{
    int n,towns,highway_needed;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&towns);
        int x,y;
        vector<pair<int,int>>locations;
        for(int i=0;i<towns;i++){
            scanf("%d %d",&x,&y);
            locations.push_back(make_pair(x,y));
        }




        scanf("%d",&highway_needed);
        vector<edge>edges;
        UnionFind uf(300000);
         int number =0;
         while(highway_needed--){
                scanf("%d %d",&x,&y);
                if(uf.union_sets(x,y))
                    number++;
             }

        if(number==towns-1){
            printf("No new highways need\n\n");
            continue;
        }
            vector<edge>edgelist;
            for(int i=0;i<locations.size();i++){
                for(int j=i+1;j<locations.size();j++){
                        edge e(i+1,j+1,(locations[j].first-locations[i].first)*(locations[j].first-locations[i].first) + (locations[j].second-locations[i].second)*(locations[j].second-locations[i].second));
                        edgelist.push_back(e);
                    }
                }



            pair<int,vector<edge> > roads=MST_Kruskal_1(edgelist,uf,towns,number);
            for(int i=0;i<roads.second.size();i++){
                printf("%d %d\n",roads.second[i].from,roads.second[i].to);
            }
            if(n)printf("\n");




    }
    return 0;
}
