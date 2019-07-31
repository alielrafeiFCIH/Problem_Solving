#include <bits/stdc++.h>

using namespace std;

int main()
{
 string s;
 int n;
 while(cin>>s && s.length()!=1){
    cin>>n;
 for(int i=0;i<n;i++)
    cout<<s;

    cout<<endl;
      for(int i=1 ; i<s.length() ; ++i){
            s+=s[0];
            s.erase(s.begin()+0);
            for(int j=0 ; j<n ; ++j)
                cout<<s;
                cout<<endl;
        }

 }
    return 0;
}
