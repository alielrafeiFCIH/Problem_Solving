#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin.ignore() ){
        getline(cin,s);
            stack<char>s1;
            string s2;
            int x=0;
        for(int i=0;i<s.length();i++){
                if(s[i]!=' '){
                    s1.push(s[i]);


            }else{
                x=i;
                int j=0;
                while(!s1.empty()){
                    s2[j]=s1.top();
                    s1.pop();
                    ++j;
                }
                s2[j]=' ';
                            }

            }
                    cout<<s2<<endl;
    }
    return 0;
}
