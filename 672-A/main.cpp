#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string s="";
    string c;

    for(int i=1;i<=1000;i++){
        stringstream ss;
        ss<<i;
        ss>>c;
        s+=c;
        }
    printf("%c",s[n-1]);
    return 0;
}
