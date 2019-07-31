#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   string s2;
   cin>>s;
   int Size = s.length();
   for(int i =0;i<Size;i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&s[i+2]!=NULL&&s[i+1]!=NULL){
            s2+=' ';
            i+=2;
        }else{
            s2+=s[i];
        }
   }
   cout<<s2;
    return 0;
}
