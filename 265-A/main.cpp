#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int pos = 0;
    int ss = s.length();
    int tt = t.length();
    int x = pos;
    for(int i = 0 ;i<tt;i++){
            char c = t[i];
        if(s[pos]==c){
            pos++;
        }

    }
    printf("%d",pos+1);
    return 0;
}
