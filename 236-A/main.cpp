#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<char>Myset;
    string s;
    cin>>s;
    int x=s.length(),cont=0;

    for(int i=0;i<x;i++){
    Myset.insert(s[i]);

    }

    if(Myset.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
    cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
