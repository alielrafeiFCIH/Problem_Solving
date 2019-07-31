#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]!='-'){
        cout<<s;
        return 0 ;
    }else{
        int ss = s.length();
        int x = 0,y,pos;
            if(s[ss-1]-'0'>s[ss-2]-'0'){
                x= s[ss-1]-'0';
                y = s[ss-2]-'0';
                pos = ss-1;
            }else{
             x= s[ss-2]-'0';
             y = s[ss-1]-'0';
                pos = ss-2;
            }
//            printf("%d",ss);
    if((y>0&&x==0)||(y==0&&x>0) && ss==3 ){
        printf("0");
    }else{
    for(int i = 0 ;i<ss;i++){
            if(i==pos){
                continue;
            }else{
                cout<<s[i];
            }
        }

    }

    }


    return 0;
}
