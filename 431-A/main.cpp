#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5];
    int x;
    for(int i = 1 ;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    string s;
    cin>>s;
    int ans = 0 ;
    int ss = s.length();
    for(int i =0;i<ss;i++){
        if(arr[s[i]-'0']){
            ans+=arr[s[i]-'0'];
        }
    }
    printf("%d",ans);
    return 0;
}
