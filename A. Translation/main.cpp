#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int flag =0;
    int Size = s1.length();
    for(int i=0,j=s2.length()-1;i<Size;i++,j--){
        if(s1[i]==s2[j]){
            flag = 1;
        }else{
            cout<<"NO";
            return 0;
        }

    }
    if(flag==1){
        cout<<"YES";
    }

    return 0;
}
