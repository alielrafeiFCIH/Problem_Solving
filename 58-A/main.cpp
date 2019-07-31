#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> Q;
    Q.push('h');Q.push('e');Q.push('l');Q.push('l');Q.push('o');
    string s1;
    cin>>s1;
    int l=s1.length();
    for(int i=0 ; i<l ; ++i){
        if(s1[i]==Q.front())Q.pop();
    }
    if(Q.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
