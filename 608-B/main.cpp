#include <bits/stdc++.h>

using namespace std;
int zeros[200002];
int ones [200002];
int main()
{
    string s;
    string s2;
    cin>>s>>s2;
    vector <int> index(s.size());
    for(int i=s2.size()-1,j=s.size()-1;j>=0;j--,i--)index[j]=i;

    for(int i=0;i<s2.size();i++){
            if(s2[i] == '0')zeros[i]=1;
            else ones[i]=1;
    }
    for(int i =1;i<s2.size();i++){
        ones[i]+=ones[i-1];
        zeros[i]+=zeros[i-1];
    }
    long long ans =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(i)ans+=ones[index[i]]-ones[i-1];
            else ans+=ones[index[i]];
        }else{
            if(i)ans+=zeros[index[i]]-zeros[i-1];
            else ans+=zeros[index[i]];
        }
    }
    printf("%lld",ans);
    return 0;
}
