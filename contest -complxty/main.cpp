#include <bits/stdc++.h>
using namespace std;
int a[26];
int main()
{
    string s1;
    cin>>s1;
    set<char>S;
    int l=s1.length();

    for(int i=0 ; i<l ; ++i){++a[s1[i]-'a'];
    cout<<" "<<a[25]<<" "<<a[24]<<endl;
    }
    sort(a,a+26);
       cout<<" "<<a[25]<<" "<<a[24]<<endl;
    cout<<l-a[25]-a[24]<<" "<<a[25]<<" "<<a[24];
//    int counter=0;
//    for(int i=0 ; i<26 ; ++i)if(a[i])++counter;
//    counter>2 ? cout<<counter-2 : cout<<0 ;
    return 0;
}
