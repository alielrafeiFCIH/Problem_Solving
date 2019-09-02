    #include <bits/stdc++.h>
    using namespace std;
    void File()
    {
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    }
    void yAsEr_HaFiz() {
        //freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);

     ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

     }




    typedef vector<int> vi;
    typedef vector<string> vs;
    typedef vector<pair<int,int> > vii;
    typedef map<int, int> mii;
    typedef map<string, int> msi;
    typedef map<long, long> mll;
    typedef set<int> si;
    typedef set<string> sst;
    typedef set<long> sl;
    typedef long long ll;
    typedef pair<int, int> pii;
    #define lp(i,n) for(int i = 0;i < int(n);i++)
    #define rlp(i, n) for (int i = (n) - 1; i >= 0; i--)
    #define rng(i,a,b) for(int i = int(a);i <= int(b);i++)
    #define mp(x,y)  	make_pair((x),(y))
    #define pb(x)    	push_back((x))
    #define all(v)  	((v).begin()),((v).end())
    #define sz(x)  		((int) (x).size())
    #define setzero(a)	memset(a,0,sizeof(a))
    #define bits(a) 	__builtin_popcountll(a)
    #define fr first
    #define sc second
    #define el      	 "\n"
    #define pii pair<int, int>
    #define sortva(v) sort(all(v))
    #define sortvd(v) sort(v.rbegin(),v.rend())
    #define sortaa(a,n) sort(a,a+n)
    #define sortad(a,n) sort(a,a+n),reverse(a,a+n)
    #define sfi1(v) scanf("%d",&v)
    #define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
    #define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
    #define sfll1(v) scanf("%I64d",&v);
    #define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
    #define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
    #define sfstr(v) scanf("%s", v);
    #define sfs1(v) cin>>v;
    #define ndl puts("")
    #define SS stringstream
    #define ll long long
    #define endl '\n'
    #define clr(x, y) memset(x, y, sizeof(x))
    #define foreach(it,x) for(__typeof__((x).begin()) it = (x).begin(); it != (x).end(); ++it)

    int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
    int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };


    int const N = 2e3 + 9, MOD = 1e9+7 , oo = 1e9+7;
    int vis[N];
    int lon[N];
    int par[N];

    vector<int> BFS(int s, vector<vector<int> > & adjList) {
        vector<int> len(sz(adjList), oo);
        queue<  int > q;
        q.push(s), len[s] = 0,par[s]=-1;

        int cur;
        while(!q.empty()) {
            int cur = q.front();	 q.pop();

            int n=adjList[cur].size();
            lp(i,n ) if (len[adjList[cur][i]] == oo)
                q.push(adjList[cur][i]), len[adjList[cur][i]] = len[cur]+1,par[adjList[cur][i]]=cur;
        }

        return len;	//cur is the furthest node from s with depth dep
    }






    char arr[N][N];

    int main()
    {
         freopen("class.in", "r", stdin);
        freopen("class.out", "w", stdout);
        int m,n,nofstudent,index1=1,index2=1,f=1;
        cin>>nofstudent>>n>>m;
        arr[0][0]='#';
        nofstudent--;
        while(nofstudent>1&&index1<n&&index2<m){
            arr[0][index1]='#';
            arr[index2][0]='#';
            nofstudent-=2;
            f++;
            index1++;
            index2++;

        }

        cout<< f<< '\n';

        lp(i,n){
        lp(j,m){
        if (arr[i][j]=='#')cout<< arr[i][j];
        else {
            if (nofstudent){
                cout<< '#';
                nofstudent--;
            }
            else cout<< '.';
        }




        }
    cout<< '\n';
        }


















































































    /*
    */










    return 0;
    }
