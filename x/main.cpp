//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{

#include <bits/stdc++.h>
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
using namespace std;

//}
//int gcd(int a,int b ){
//    if(b==0)return a;
//    return gcd (b,a%b);
//}
const int OO = (int)1e6;
vector<int> BFSPath(pair<int,int>s,pair<int,int>d, vector<vector<char> > & adjList) {
	vector<pair<int,int> > len(sz(adjList), OO);
	vector<pair<int,int> > par(sz(adjList), -1);
	queue<pair<int,int>> q;
	q.push(s), len[s] = 0;
    pair<int,int>cur;
	int dep = 0,  sz = 1;
	bool ok = true;

	for ( ; ok &&  !q.empty();	++dep, sz = q.size()) {
		while (ok && sz--) {
			cur = q.front(), q.pop();
			for(int i =0;i<adjList.size();i++) if (len[adjList[cur.first][cur.second]] == OO)
			{
				q.push(adjList[cur][i]), len[adjList[cur][i]] = dep+1, par[ adjList[cur][i] ] = cur;

				if(adjList[cur][i] == d)	// we found target no need to continue
				{
					ok = false;
					break;
				}
			}
		}
	}

	vector<int> path;
	while(d != -1) {
		path.push_back(d);
		d = par[d];
	}

	reverse( all(path) );

	return path;
}
int main()
{

//    freopen("prime.in" , "r" , stdin);

int n;
scanf("%d",&n);
vector<vector<char> >  adjList(500);
for(int i =0;i<n;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    pair<int,int>s;
    pair<int,int>e;
    rep(j,x){
        rep(k,y){
            char c ;
            cin>>c;
            if(c=='S')s.first=j,s.second=k;
            if(c=='E')e.first=j,e.second=k;
            adjList[j].push_back(c);

        }

    }


}





























//    for(int i =0;i<n;i++){
//        scanf("%d",&x);
//        for(int j =0;j<x;j++){
//            scanf("%d",&a[j]);
//        }
//        int mn=
//    }
//    for(int i =0;i<n;i++){
//        scanf("%d",&x);
//        int g = (1024*x)-(x*1000);
//        g = (x*1000)-g;
//    }
//    int a[100005];
//    for(int i =0;i<n;i++){
//        int x;
//        scanf("%d",&x);
//        for(int j = 0;j<x;j++){
//            scanf("%d",&a[j]);
//        }
//        int count = 0;
//        if(a[0]>a[1]&&a[0]>a[x-1])count++;
//        else if(a[x-1]>a[0]&&a[x-1]>a[x-2])count++;
//        for(int j =1;j<x-1;j++){
//            if(a[j]>a[j-1]&&a[j]>a[j+1])count++;
//        }
//
//        cout<<count<<endl;
//    }
//    for(int i = 0;i<n;i++){
//        int len ,m ;
//        scanf("%d%d",&len,&m);
//        string s ;
//        cin>>s;
//        int count = 0;
//        int x =0;
//        for(int j = 0;j<len;j++){
//            stringstream k(s);
//            k>>x;
//            if(gcd(x,m)==1)count++;
//        }
//        cout<<count<<endl;
//    }
//    cin>>n;
//    string a,b,c;
//    int mn =10000000;
//    for(int i =0;i<n;i++){
//        cin>>a>>b>>c;
//        int a1,b1;
//        stringstream x(a);
//        x>>a1;
//         stringstream x1(b);
//        x1>>b1;
//        int c1 = check(c);
//        int ans = 10000000;
//        for( int j = a1;j<=b1;j++){
//         string ss;
//         stringstream x;
//        x<<j;
//        x>>ss;
//
//         int s1 = check(ss);
//            if(abs(s1-c1)<abs(mn-c1)){
//                mn = s1;
//                ans =j;
//            }
//
//        }
//        cout<<ans<<endl;
//         mn =10000000;
//    }
    return 0;
}


//    int n;
//    scanf("%d",&n);
//    int x;
//    for(int i =0 ;i<n;i++){
//        scanf("%d",&x);
//
//        cout<<1024-(x*1000)<" GB, "<< <<" MB and "<<" "<<" Bytes"<<endl;
//    }







//    int n;
//    scanf("%d",&n);
//    int a,b;
//    for(int i =0;i<n;i++){
//        scanf("%d%d",&a,&b);
//        printf("%d %d\n",a/b,a%b);
//    }









//
//
//
//




//    int n,x;
//    scanf("%d",&n);
//    for(int i =0;i<n;i++){
//        cin>>x;
//        int sum = 0;
//        for(int i = 1;i<=x;i++){
//            if(i%2!=0)sum+=i;
//        }
//        cout<<sum<<endl;
//    }
//    return 0;
//}
