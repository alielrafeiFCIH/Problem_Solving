#include <bits/stdc++.h>
using namespace std;

bool is_sub(string ss){
int e=ss.size()-1;
int s=0;
while(s<e){
    if(ss[s]!=ss[e]){
        return false;
    }
    ++s;--e;
}
return true;

}



int main()
{
    string s;
    while(cin>>s){
        set<string>mset;
            for(int i=0;i<s.size();i++){
                for(int j=0;j<s.size()-1;j++){
                    string s1=s.substr(i,j);
                    if(is_sub(s1)){

                        mset.insert(s1);
                    }
                }
            }
            cout << "The string '"<<s<<"' contains "<< mset.size() << " palindromes." << endl;
    }

    return 0;
}
