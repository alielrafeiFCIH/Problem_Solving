#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
   int  up=0,down=0;
        if(s[0]==tolower(s[0])){
            for(int i=1;i<s.length();i++){
                if(s[i]==toupper(s[i])){
                    ++up;
                }
            }
            if(up==s.size()-1){
                    for(int i=0;i<s.length();i++){
                    if(s[i]==tolower(s[i])){
                            s[i]=toupper(s[i]);
                    }else{
                    s[i]=tolower(s[i]);
                    }
                }
                cout<<s<<endl;
                return 0;

            }else{
            cout<<s<<endl;
            return 0;
            }
        }else{
            for(int i=1;i<s.length();i++){
                if(s[i]==toupper(s[i])){
                    ++up;
                }
            }
            if(up==s.size()-1){
                for(int i=0;i<s.length();i++){
                    if(s[i]==tolower(s[i])){
                            s[i]=toupper(s[i]);
                    }else{
                    s[i]=tolower(s[i]);
                    }
                }
                cout<<s<<endl;
                return 0;

            }else{
                cout<<s<<endl;
                return 0;
            }
        }

    return 0;
}
