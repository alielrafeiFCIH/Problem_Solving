#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    scanf("%d",&n);
    cin>>s;
    int start  = 0 , end = 0;
    for(int i = 0 ;i<n;i++){
        if(!start && (s[i]=='R'||s[i]=='L')){
            start = i;
        }

        if(s[i]=='R'||s[i]=='L'){
            end = i;
        }

    }
    int st=0 ,ed=0;
    if(s[start]=='R'){
        st = start+1;
        for(int i = start;i<=end;i++){
            if(s[i]=='L'){
                ed = i;
                break;
            }
        }
        ed?printf("%d %d",st,ed):printf("%d %d",st,end+2);
    }else{
        ed = start;
        for(int i = start;i<=end;i++){
            if(s[i]=='R'){
                st = i+1;
                break;
            }
        }
        st?printf("%d %d",st,ed):printf("%d %d",end+1,ed);
    }
    return 0;
}
