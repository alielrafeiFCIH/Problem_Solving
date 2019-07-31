#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n,x,y;
 string s;
 cin>>n;
 while (n!=0){
    cin>>s;
    x=s.size()-1;
    y=s.size()-2;
    if(s.size()>10){
        cout<<s[0]<<y<<s[x]<<endl;
    }else {

    cout<<s<<endl;
    }
    --n;
 }
    return 0;
}
