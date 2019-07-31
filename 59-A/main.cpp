#include <bits/stdc++.h>

using namespace std;

int main()
{

    int contup=0,contlw=0;
    string s;
    cin>>s;
    int Size = s.length();
    for(int i =0;i<Size;i++){
        if(s[i]>='a'&&s[i]<='z'){
            contlw++;
        }else{
        contup++;
        }
    }
    if(contlw>contup){

    for(int i =0;i<Size;i++){
     if(!(s[i]>='a'&&s[i]<='z')){
        s[i]+=32;
     }
    }

    }else if(contlw<contup){
        for(int i =0;i<Size;i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }
    }else{
           for(int i =0;i<Size;i++){
             if(!(s[i]>='a'&&s[i]<='z')){
                s[i]+=32;
             }
            }
    }
    cout<<s<<endl;
    return 0;

}
