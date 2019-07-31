#include <bits/stdc++.h>

using namespace std;
//vector<int>v;
//void minop(string s){
//    int j = 1;
//    int count=0;
//    for(int i = 0 ;i<s.length();i++){
//        if(s[i]==s[j]){
//           count++;
//           s[j]='-';
//        }
//        j++;
//    }
//    v.push_back(count);
//}
vector<int> minimalOperations(vector<string> words) {
vector<int>v;


    for(int i = 0;i<words.size();i++){
        int j = 1;
        string s = words[i];
        int count = 0;
    for(int k = 0 ;k<s.length();k++){
        if(s[k]==s[j]){
           count++;
           s[j]='-';
        }
        j++;
    }
    v.push_back(count);
}
return v;
}
int main()
{
   int n;
   scanf("%d",&n);
   string s;
   vector<int>x;
   vector<string> words;
   for(int i = 0 ;i<n;i++){
    cin>>s;
    words.push_back(s);

   }
    x = minimalOperations(words);
    for(int i = 0;i<x.size();i++)
        cout<<x[i]<<endl;
    return 0;
}
