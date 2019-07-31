#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n!=0){
            cin.ignore();
            getline(cin,s);
            stack<char>stk;
        if(s.empty())cout<<"Yes"<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            if(!stk.empty()&&stk.top()=='(')stk.pop();
            else stk.push(s[i]);
        }
        else if(s[i]==']'){
            if(!stk.empty()&&stk.top()=='[')stk.pop();
            else stk.push(s[i]);
        }
    }
    if(stk.empty())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    --n;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
