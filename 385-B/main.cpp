#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n =s.length();
    int answer =0;
    int j=-1;
    for(int i=0;i<(n-3);i++){
        if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r')answer+=(n-3-i)*(i-j),j=i;
    }
    printf("%d",answer);
    return 0;
}
