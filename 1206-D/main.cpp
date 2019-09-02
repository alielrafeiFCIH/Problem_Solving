    //Compiler_101
    #include <bits/stdc++.h>
    using namespace std;

    #define loop(i,n) for(int i = 0;i < int(n);i++)
    #define rloop(i,n) for(int i = int(n);i >= 0;i--)
    #define range(i,a,b) for(int i = int(a);i <= int(b);i++)
    #define SZ(c) int(c.size())
    #define ALL(c) c.begin(), c.end()
    #define RALL(c) c.rbegin(), c.rend()
    #define PI acos(-1)
    #define pb push_back
    #define mp make_pair
    #define fr first
    #define sc second
    #define sfi1(v) scanf("%d",&v)
    #define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
    #define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
    #define sfll1(v) scanf("%I64d",&v);
    #define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
    #define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
    #define endl '\n'

    typedef vector<int> vi;
    typedef vector<pair<int,int> > vii;
    typedef long long ll;
    typedef pair<int, int> pii;

    const int N = 2005;
    int dp[N][N][2][2];
    string str[2];

    int solve(int st , int ed , int flag , int lst){
        if(st >= ed)return 0;
        int &ret =dp[st][ed][flag][lst];
        if(~ret)return ret;
        ret = solve(st+1,ed,flag,lst);
        if(str[flag][st]-'0' >= lst){
            ret = max(ret , solve(st,ed,flag,str[flag][st]-'0')+1);
        }
        return ret;
    }


    int main()
    {

    #ifndef ONLINE_JUDGE
    	//freopen("in.in", "r", stdin);
    	//freopen("out.in", "w", stdout);
    #endif
    	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        memset(dp,-1,sizeof dp);
        cin >> str[0];
        str[0] += '0';
        str[1] = string(SZ(str[0]) , '0');
        rloop(i,SZ(str[0])-2){
            if(str[0][i] == '0')continue;
            range(ed,i+1,SZ(str[0])){
                int F = solve(i,ed,0,0);
                int S = solve(i+1,ed,1,0)+1;
                //cout << ed << " " << F << " " << S << endl;
                if(F < S){
                    str[1][i] = '1';
                    break;
                }
            }
        }

        str[1] = str[1].substr(0,SZ(str[1])-1);
        cout << str[1] << endl;


        return 0;
    }
