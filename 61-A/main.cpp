#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1,ans;
    cin>>s;
    cin>>s1;
    int Size= s.length();
    for(int i=0;i<Size;i++){
        if(s[i]!=s1[i]){
            ans+='1';
        }else{
            ans+='0';
        }
    }
    cout<<ans;
    return 0;
}
