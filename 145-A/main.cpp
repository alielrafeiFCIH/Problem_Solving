#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    int cont4=0,cont7=0;
    cin>>a>>b;
    int x=a.length();
    for(int i=0;i<x;i++){
        if(a[i]=='4'&&b[i]=='7'){++cont4;
    }else if(a[i]=='7'&&b[i]=='4'){
        ++cont7;}
    }
    cout<<max(cont4,cont7);
    return 0;
}
