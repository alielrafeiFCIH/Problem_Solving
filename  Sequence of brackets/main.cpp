#include <bits/stdc++.h>

using namespace std;
bool notblance( char open , char close){
    if(open=='('&&close ==')'){
        return true;
    }else if(open == '{' && close == '}'){
    return true;
    }else if(open == '[' && close == ']'){
    return true;
    }else {
        return false ;
    }
}
int main()
{
   stack<char> s;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='('||s1[i]=='['||s1[i]=='{'){
            s.push(s1[i]);
           }else if(s1[i]==']'||s1[i]=='}'||s1[i]==')'){
                if(s.empty() || !notblance(s.top(),s1[i])){
                    cout<<"no";
                    return 0;
                }else{
                    s.pop();
                }
           }
    }


   if(s.empty()){
   cout<<"yes";
   }else{
   cout<<"no";
   }
    return 0;
}
