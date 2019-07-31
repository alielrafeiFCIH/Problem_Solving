#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int sss = s.size();
    int x,ans=0;
    x = 97;

    for(int i = 0 ;i<sss;i++){

    ans+= min(abs(s[i]-x),(26-abs(x-s[i])));

    x = 0 + s[i];
    }
    printf("%d",ans);
    return 0;
}
