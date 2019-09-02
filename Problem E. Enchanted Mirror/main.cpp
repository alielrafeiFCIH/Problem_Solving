#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>>v;
int main()
{
    //freopen("enchanted.in", "r", stdin);
    //freopen("enchanted.out", "w", stdout);
    string s,s1;
    string t,t1;
    cin>>s>>s1;
    cin>>t>>t1;
    int s_one = 0;
    int s_two = 0;
    int n = s.size()-1;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(t[i]==s[j]){
               char temp = s1[n-i];
               s1[n-i] = s1[n-j];
               s1[n-j] = temp;
               temp = s[j];
               s[j] = s[i];
               s[i] = temp;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(s1[i]!=t1[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}

