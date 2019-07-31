#include <bits/stdc++.h>

using namespace std;

int main()
{
string  s;
int a[26];
cin>>s;
for(int i=0;i<26;i++)a[i]=0;

for(int i=0;i<s.size();i++)++a[s[i]-'a'];

int mx=*max_element(a,a+26);
if(mx*2>s.size()||s.size()%2){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
    return 0;
}
