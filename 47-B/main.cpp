#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0 ;i<n;i++)
#define pb(x) push_back(x)
using namespace std;

int main()
{
    string s;
    int a=0,b=0,c=0;
    lp(i,3){
        cin>>s;
        if(s[0]=='A'&&s[1]=='>'&&s[2]=='B'||s[0]=='B'&&s[1]=='<'&&s[2]=='A'){
            a++;
        }else if(s[0]=='A'&&s[1]=='<'&&s[2]=='B'||s[0]=='B'&&s[1]=='>'&&s[2]=='A'){
            b++;
        }else if(s[0]=='A'&&s[1]=='>'&&s[2]=='C'||s[0]=='C'&&s[1]=='<'&&s[2]=='A'){
            a++;
        }else if(s[0]=='C'&&s[1]=='>'&&s[2]=='A'||s[0]=='A'&&s[1]=='<'&&s[2]=='C'){
            c++;
        }else if(s[0]=='C'&&s[1]=='>'&&s[2]=='B'||s[0]=='B'&&s[1]=='<'&&s[2]=='C'){
            c++;
        }else if(s[0]=='B'&&s[1]=='>'&&s[2]=='C'||s[0]=='C'&&s[1]=='<'&&s[2]=='B'){
            b++;
        }

    }
   int mn = min(a,b);
   if(mn==a){
        mn = min(a,c);
   }else{
        mn = min(b,c);
   }

   int mx = max(a,b);
   if(mx == a){
        mx = max(a,c);
   }else {
        mx = max(b,c);
   }
   if(a!=b&&a!=c&&c!=b){
    if(mn==a&&mx==b){
        cout<<"ACB";
    }else if(mn==a&&mx==c){
        cout<<"ABC";
    }else if(mn==b&&mx==a){
        cout<<"BCA";
    }else if(mn==b&&mx==c){
        cout<<"BAC";
    }else if(mn==c&&mx==a){
    cout<<"CBA";
    }else if(mn==c&&mx==b){
        cout<<"CAB";
    }
   }else {
    cout<<"Impossible";
   }

    return 0;
}
