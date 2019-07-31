#include <bits/stdtr1c++.h>

using namespace std;

int main()
{
 string s;
char x='1',y='0';
int one=0,zero=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==x){
            ++one;
            if(one==7){
                    cout<<"YES"<<endl;
                    return 0;}
        }else{
            one=0;
        }
        if(s[i]==y){
            ++zero;
            if(zero==7){
                    cout<<"YES"<<endl;
            return 0;}
        }else{
            zero=0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
