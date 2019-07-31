#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            ++c;
        }
    }
    if(c==1||(c==0 &&s.length()%2!=0)){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }
    return 0;

}
