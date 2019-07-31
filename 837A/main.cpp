#include <bits/stdc++.h>

using namespace std;

int main()
{
string s;
int n,c=0,mx=0;
cin>>n;
cin.ignore();
getline(cin,s);
for(int i=0;i<s.length();i++){
    if(s[i]!=' '){
        if(s[i]>='A'&&s[i]<='Z'){
            ++c;
            mx=max(mx,c);
        }
    }else{

        c=0;
    }
}
cout<<mx<<endl;

    return 0;
}
