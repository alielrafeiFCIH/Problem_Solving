#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n!=0){
            cin>>s;
            stack<char>stk;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['){
            stk.push(s[i]);
        }

        if(!stk.empty()&&s[i]==')'&&stk.top()=='('){
            stk.pop();
        }else if(!stk.empty()&&s[i]==']'&&stk.top()=='['){
            stk.pop();
        }else if(stk.empty()&&s[i]==')'||s[i]==']'){
        stk.push(s[i]);
       }


    }
    if(stk.empty()){
        cout<<"Yes"<<endl;
    }else{
    cout<<"No"<<endl;
    }
    --n;
    }



    //cout << "Hello world!" << endl;
    return 0;
}
