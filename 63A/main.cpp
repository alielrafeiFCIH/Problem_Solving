#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
string name;
string pos;
string captain;
cin>>n;
vector<string>woman;
vector<string>rat;
vector<string>man;
    while(n!=0){
        cin>>name>>pos;
        if(pos=="rat"){
                rat.push_back(name);
        }else if(pos=="woman"||pos=="child"){
            woman.push_back(name);
        }else if(pos=="man"){
            man.push_back(name);
        }else if(pos=="captain"){
        captain=name;
        }
        --n;
    }
    for(int i=0;i<rat.size();i++){
        cout<<rat[i]<<endl;
    }
     for(int i=0;i<woman.size();i++){
        cout<<woman[i]<<endl;
    }
     for(int i=0;i<man.size();i++){
        cout<<man[i]<<endl;
    }
    cout<<captain<<endl;
    return 0;
}
