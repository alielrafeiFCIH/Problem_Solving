#include <bits/stdc++.h>
using namespace std;

pair<string , string> P[100];


int main()
{
    int n;
    cin>>n;
    for(int i=0 ; i<n ; ++i)
    {
        string s1,s2;
        cin>>s1>>s2;
        P[i].first=s2;
        P[i].second=s1;
    }
    sort(P,P+n);
    //sort(P,P+n,comp);
    for(int i=0 ; i<n ; ++i)cout<<P[i].second<<' '<<P[i].first<<endl;
    return 0;
}
