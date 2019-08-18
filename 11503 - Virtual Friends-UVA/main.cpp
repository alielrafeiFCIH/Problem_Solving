#include <bits/stdc++.h>

using namespace std;
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

typedef long long ll;
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
struct edge{
    int from;
    int to;
    edge(int f ,int t){
        from = f;
        to = t;
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
        if(rank[x]<=rank[y])
            rank[y]+=rank[x];
    }
    int union_sets(int x,int y){
        x = find_set(x),y = find_set(y);
        if(x!=y){
            link(x,y);
            forests--;
        }

        return max(rank[x],rank[y]);
    }
 vector<vi> connected_componenets(){
    vector<vi> list (sz(parent));
    lp(i,sz(parent)){
        list[find_set(i)].push_back(i);
    }
    return list;

}

};

int main(){

    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        map<string,int>community;
        set<string>s;
        int set_size=s.size();
        UnionFind uf(n+1);
        int hash =0;
        string name_1,name_2;
        int count=1;
        while(n--){
            cin>>name_1>>name_2;
            s.insert(name_1);
            if(s.size()!=set_size)set_size=s.size(),community[name_1]=hash++;
            s.insert(name_2);
            if(s.size()!=set_size)set_size=s.size(),community[name_2]=hash++;
            if(uf.union_sets(community[name_1],community[name_2])){
                    printf("%d\n",uf.union_sets(community[name_1],community[name_2]));
            }


        }



    }
    return 0;
}
