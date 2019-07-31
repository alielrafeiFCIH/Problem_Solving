#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   map<char,int>m;
   getline(cin,s);
   int Size = s.length();
   for(int i =0;i<Size;i++){
   if(s[i] >= 'a' && s[i] <= 'z')
    m[s[i]]=1;
   }
   printf("%d",m.size());
    return 0;
}
