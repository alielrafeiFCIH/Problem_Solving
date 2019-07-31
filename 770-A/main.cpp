#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    string s ="abcdefghijklmnopqrstuvwxyz";
    string s1="";
    int i = 0;
    while(s1.length()<n){
        s1+=s[i];
        i = (i+1)%k;
    }
    cout<<s1;

    return 0;
}
