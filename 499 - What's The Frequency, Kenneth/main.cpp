#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a[26];
    int a1[26];
    while(getline(cin,s)){
            for(int i=0;i<26;i++)a[i]=0;a1[i]=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '&&s[i]>='a'&&s[i]<='z'){
            ++a[s[i]-'a'];
        }
    }
    for(int i=0;i<s.size();i++){
     if(s[i]!=' '&&s[i]>='A'&&s[i]<='Z'){
            ++a1[s[i]-'A'];
        }
    }
    int x=*max_element(a,a+26);
    int y=*max_element(a1,a1+26);
    int z=max(x,y);
    string s1="";
    for(int i=0;i<26;++i){
        if(a[i]==z){
            s1+=i+'a';
        }
        if(a1[i]==z){
            s1+=i+'A';
        }
        }
            sort(s1.begin(),s1.end());
    cout<<s1<<" "<<z<<endl;
    }


    return 0;
}
