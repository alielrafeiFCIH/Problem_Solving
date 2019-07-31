#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,c=0;
cin>>n;
string s;

for(int i=0;i<n;i++){
    cin>>s;
    if(s.length()==5){
        cout<<"3"<<endl;
    }else{
        c=0;
        if(s[0]=='o'){
            ++c;
        }
        if(s[1]=='n'){
            ++c;
        }
        if(s[2]=='e'){
            ++c;
        }
        if(c>=2){
            cout<<"1"<<endl;
        } else{
        cout<<"2"<<endl;
        }

    }
}

    return 0;
}
