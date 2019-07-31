#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    scanf("%d%d",&n,&m);
   vector< pair<int ,int> >v;
    int a,b;
    for(int i =0;i<m;i++){
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int i = v.size()-1;
    while(n&&i<v.size()){

        if(n<v[i].second){
            cnt+=v[i].first*n;
            n=0;
        }else{
            cnt+=v[i].first*v[i].second;
            n-=v[i].second;
        }
        i--;
    }
    cout<<cnt;
    return 0;
}
