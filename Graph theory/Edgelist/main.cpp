#include <bits/stdc++.h>
using namespace std;

vector<pair<int,pair<int,int > > > edgeList;

int main()
{
    scanf("%d%d",&n,&m);
    int a , b , w;
    for(int i = 0 ; i < m ; i++){
        scanf("%d%d",&a,&b);
        edgeList.push_back(make_pair(w,make_pair(a,b)));
    }

    return 0;
}

