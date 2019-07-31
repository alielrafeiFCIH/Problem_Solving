#include <bits/stdc++.h>

using namespace std;
vector< pair<int,int> >mp;
map<pair<int,int>,int >v;
bool cmp(pair<int,int>x,pair<int,int>y){
    if(x.first!=y.first)
        return x.first>y.first;
    return x.second<y.second;



}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int score , penalty;
    for(int i =0;i<n;i++){
        scanf("%d%d",&score,&penalty);
        mp.push_back(make_pair(score,penalty));
        v[{score,penalty}]++;
    }
    sort(mp.begin(),mp.end(),cmp);
    k = k-1;
    pair<int,int>tempo = mp[k];
    printf("%d",v[tempo]);
    return 0;
}
