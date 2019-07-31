#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s[10][2];
        int mx=0;
        for(int j=0;j<10;j++){
            cin>>s[j][0]>>s[j][1];
            stringstream ss(s[j][1]);
            int x;
            ss>>x;
            if(x>mx)mx=x;
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0;j<10;++j){
            stringstream ss(s[j][1]);
            int x;
            ss>>x;
            if(x==mx)cout<<s[j][0]<<endl;
        }
    }
    return 0;
}
