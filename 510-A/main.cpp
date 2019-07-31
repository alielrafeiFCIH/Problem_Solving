#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    string s="";
    string s1="#";
    string s2="";
    for(int i = 0 ;i<m;i++)s+='#';
    for(int i = 1 ;i<m;i++)s1+='.';
    for(int i = 0 ;i<m-1;i++)s2+='.';
    s2+='#';
    int x = 1;
    for(int i = 0 ;i<n;i++){
        if(x==1||x==3){cout<<s<<endl;x++;}
        else if(x==2){cout<<s2<<endl;x++;}
        else if(x==4){cout<<s1<<endl;x++;}

        if(x>4)x=1;
    }
    return 0;
}
