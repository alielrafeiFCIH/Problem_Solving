#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int ,int >m;
    vector<int>v;
    int n;
    while(cin>>n){
        if(m[x]==0)v.push_back(x);

        m[x]++;
    }
    for(int i=0;i<v.size();i++){
        int cur =v[i];
        cout<< cur << ' ' << m[cur] <<endl;
    }
    return 0;
}
