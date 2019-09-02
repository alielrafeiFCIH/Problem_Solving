#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char s1[2222];
    cin>>s;
    for(int i=0;i<s.size()-2;i+=2){
        if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'){
            s1[i]=s[i+1]=s[i+2]='0'
        }else if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='1'){

        }else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){

        }else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='1'){

        }else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){

        }else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){

        }else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'){

        }else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'){

        }
    }
//            for(int i =0;i<3;i++){
//            int count_chg = 0;
//            for(int j =0;j<x;j++){
//                if(s[j]!=rgb[(j+i)%3])v[j]=1;
//                else v[j]=0;
//                count_chg+=v[j];
//                if(j>=k)count_chg-=v[j-k];//printf("%d\n",count_chg);
//                if(j>=k-1)ans=min(ans,count_chg);
//            }
//
//        }
    return 0;
}
