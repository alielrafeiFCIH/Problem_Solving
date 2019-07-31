#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string ans="";
    int n;
    scanf("%d",&n);
    cin>>s;
    if(s.length()%2==0){
            int p1=2,p2=1;
            ans+=s[0];
            string ans2="";
            while(p1<s.length()||p2<s.length()){
                if(p2<s.length()){
                ans+=s[p2];
                p2+=2;
                }
                if(p1<s.length()){
                ans2+=s[p1];
                 p1+=2;
                }


            }
            reverse(ans2.begin(),ans2.end());
            cout<<ans2+ans;
    }else{
      int p1=1,p2=2;
            ans+=s[0];
            string ans2="";
            while(p1<s.length()||p2<s.length()){
                if(p2<s.length()){
                ans+=s[p2];
                p2+=2;
                }
                if(p1<s.length()){
                ans2+=s[p1];
                 p1+=2;
                }


            }
            reverse(ans2.begin(),ans2.end());
            cout<<ans2+ans;
    }
    return 0;
}
