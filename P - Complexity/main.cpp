#include <bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    string s1;
    cin>>s1;
    set<char>S;
    int l=s1.length();

    for(int i=0 ; i<l ; ++i)++a[s1[i]-'a'];
    sort(a,a+26);
    cout<<l-a[25]-a[24];
    return 0;
}
