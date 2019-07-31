#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    for(int i  = 0 ; i<s.length() ; ++i){
        if(s[i]=='9'&&i==0){
         continue;
        }else{
        int x=(int)s[i] - 48;
        if(x>=5){
            x= 9 - x;
            s[i]=(char) x +48;
        }
        }
    }
    cout<<s<<endl;

}
