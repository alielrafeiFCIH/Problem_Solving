#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string s;
    string s1;
    cin>>s;
    cin>>s1;
    int a[2001];
    int b[2001];
    for(int i = 0 ;i<n;i++){
        a[i] = s[i]-'0';
        b[i] = s1[i]-'0';
    }
    int answer1=0 ,answer2=1,ans=0;
    for(int i = 0 ;i<n;i++){
        answer1 = abs(a[i]-b[i]);
        if(abs(a[i]-9)>abs(a[i]-0)){
        answer2 = answer2 +(abs(0-a[i])+(9-b[i]));
        }else{
        answer2 = answer2 +(abs(9-a[i])+(abs(0-b[i])));
        }
        ans = ans + min(answer1,answer2);
        answer1 = 0;
        answer2 = 1;
    }
    printf("%d",ans);
    return 0;
}
