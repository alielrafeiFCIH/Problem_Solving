#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int x = s3.length();
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1.length()<s3.length()||s1.length()>s3.length()){
        printf("NO");
        return 0;
    }
    for(int i = 0 ;i<x;i++){
        if(s1[i]!=s3[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
