#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[200009];
    scanf("%d",&n);
    string s ;
    bool flag = true;
    cin>>s;
    int index = s.find("RL");
    for(int i = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(index==-1){
        printf("-1");
        return 0 ;
    }
    vector<int>b;
    for(int i = 0 ;i<n-1;i++){
        if(s[i]=='R'&&s[i+1]=='L'){
            int time = (a[i+1]-a[i])/2;

            b.push_back(time);
        }
    }
    sort(b.begin(),b.end());
    int mn = 1e9+1;
    for(int i = 0;i<b.size();i++){
        if(b[i]<mn ){
            mn = b[i];
        }
    }

    printf("%d",mn);
    return 0;
}
