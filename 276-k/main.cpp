#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a[26];
    int t,k;
    cin>>t;
    while(--t){
        cin>>k>>s;
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        for(int i=0;i<s.size();i++){
            ++a[s[i]-'a'];
        }
        int cont=0;
        for(int i=0;i<26;i++){
            if(a[i]%2==1){
                    ++cont;
            }
        }
        if(cont>k||s.size()<k){
            cout<<"No"<<endl;
        }else{
        cout<<"Yes"<<endl;
        }

    }
    return 0;
}
