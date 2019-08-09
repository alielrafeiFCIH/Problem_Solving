#include <bits/stdc++.h>

using namespace std;
int aa[27];
int bb[27];
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)aa[a[i]-'a']++;
    for(int i=0;i<b.length();i++)bb[b[i]-'a']++;

    for(int i=0;i<26;i++){
        if(bb[i]&&aa[i]){
            int mn=min(bb[i],aa[i]);
            for(int j=0;j<mn;j++)printf("%c",i+'a');
        }
    }
    return 0;
}
