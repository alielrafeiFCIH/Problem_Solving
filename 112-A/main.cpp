#include <bits/stdc++.h>

using namespace std;

int main()
{
     string s1,s2,s3,s4;
     cin>>s1>>s2;
     int cont=0;
    for(int i = 0; i < s1.length(); ++i) {
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
        if(s1[i]>s2[i]){
                cout<<"1"<<endl;
                return 0;
        }else if(s2[i]>s1[i]){
        cout<<"-1"<<endl;
        return 0;
        }
}
//sort(s1.begin(),s1.end());633
//sort(s2.begin(),s2.end());
cout<<"0"<<endl;

      return 0;
}
