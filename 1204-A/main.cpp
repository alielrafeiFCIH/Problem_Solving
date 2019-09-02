#include <bits/stdc++.h>

using namespace std;
int main()
{

    string s;
    cin >> s;
    int count =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')count++;
    }
    if(count <= 1){
        printf("%d",s.size()/2);
    }else{
        printf("%d",(s.size()+1)/2);
    }

    return 0;
}
