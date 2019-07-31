#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string s1 ;
    string l="",r="";
    cin>>s;

    int w1 = 0,w2= 0;
    bool flag = true ;
    for(int i =0;i<s.length();i++){
        if(flag && s[i]!='|'){
            l+=s[i];
            w1++;
        }else {
            r+=s[i];
            w2++;
            flag = false;
        }
    }
    w2-=1;
    cin>>s1;
    if(w1>w2){
        if(w2+s1.length()>w1){
            int d = (w2+s1.length())-w1;
            if(d%2==0){
                    int i = 0;
                    int totalw = (w1+s1.length()+w2)/2;
                    int iwant = totalw - w2;
                while(iwant!=0&&i<s1.length()){
                    r+=s1[i];
                    i++;
                    iwant--;
                }
                iwant  = totalw - w1;
                while(iwant!=0&&i<s1.length()){
                   l+=s1[i];
                   i++;
                   iwant--;
                }
                cout<<l+r;
            }else{
            printf("Impossible");
            }
        }else if(w2+s1.length()<w1){
            printf("Impossible");
        }else{
            s+=s1;
            cout<<s;
        }

    }else if(w1<w2){
            if(w1+s1.length()>w2){
            int d = (w1+s1.length())-w2;
            if(d%2==0){
                    int i = 0;
                    int totalw = (w1+s1.length()+w2)/2;
                    int iwant = totalw - w1;
                while(iwant!=0&&i<s1.length()){
                    l+=s1[i];
                    i++;
                    iwant--;
                }
                iwant  = totalw - w2;
                while(iwant!=0&&i<s1.length()){
                   r+=s1[i];
                   i++;
                   iwant--;
                }
                cout<<l+r;
            }else{
            printf("Impossible");
            }
        }else if(w1+s1.length()<w2){
            printf("Impossible");
        }else{
            l+=s1;
            cout<<l+r;
        }
    }else{
        if((w1+w2+s1.length())%2==0){
            int d = s1.length();
            for(int i = 0;i<d/2;i++)
                l+=s1[i];
            for(int i = d/2;i<s1.length();i++)
                r+=s1[i];
            cout<<l+r;
        }else{
            printf("Impossible");
        }

    }

    return 0;
}
