#include <bits/stdc++.h>

using namespace std;
int str1[27];
int str2[27];
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag1=false,flag2=true;
    int j =0;

    if(s1.size()!=s2.size()){

        for(int i=0;i<s1.size();i++)
            if(j<s2.size())
                if(s1[i]==s2[j])j++;


        if(s2.size()==j){
            printf("automaton");
        }else{
             for(int i=0;i<s1.size();i++)
            str1[s1[i]-'a']++;
        for(int i=0;i<s2.size();i++)
            str2[s2[i]-'a']++;
        for(int i=0;i<26;i++)
            if(str2[i]>str1[i]){
                flag2 =false;
                break;
            }
        if(!flag2){
            printf("need tree");
        }else{
            printf("both");
        }
        }


    }else{
        for(int i=0;i<s1.size();i++)
            str1[s1[i]-'a']++;
        for(int i=0;i<s2.size();i++)
            str2[s2[i]-'a']++;
        for(int i=0;i<26;i++){
            if(str2[i]>str1[i]){
                flag2 =false;
                break;
            }
        }

        if(flag2)printf("array");
        else printf("need tree");
    }

    return 0;
}
