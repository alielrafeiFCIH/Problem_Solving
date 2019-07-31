#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char k;
    string s;
    int count = 0;
    scanf("%d",&n);
    cin>>k;
    int kk = (k-'0')+1;
    for(int i = 0;i<n;i++){
        cin>>s;
        int cnt = 0;
        for(int j = 0;j<=k;j++){
            for(int k = 0;k<s.length();k++){
                if(s[k]==j){
                    cnt++;
                    break;
                }
            }
        }

        if(cnt==kk){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
