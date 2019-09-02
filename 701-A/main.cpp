#include <bits/stdc++.h>
#define lp(i,n) for(int i=0;i<(int)n;i++)
#define rep(i,a,n) for(int i =a;i<(int)n;i++)
#define loop(i,n) for(int i=1;i<=n;i++)
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>>vvi;
typedef vector<pair<int,int>> vii;
int main()
{
    int n;
    scanf("%d",&n);
    vii ind;
    int a;
    loop(i,n){
    scanf("%d",&a);
    ind.push_back(make_pair(a,i));
    }
    sort(ind.begin(),ind.end());
    int pos =0;
    lp(i,n/2){
        printf("%d %d\n",ind[i].second,ind[n-i-1].second);
    }

    return 0;
}
