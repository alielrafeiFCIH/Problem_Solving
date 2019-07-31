#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    string answer="";
    string a;
    char c;
    cin>>c;
    cin>>a;
    int s = a.length();
    int s11 = s1.length();
    int s12=s2.length(),s13 = s3.length();

    for(int i = 0 ;i<s;i++){
        for(int j = 0 ;j<s11;j++){
            if(a[i]==s1[j]&&c=='R'){
                    answer+=s1[j-1];
            }else if(a[i]==s1[j]&&c=='L'){
                    answer+=s1[j+1];
            }
        }
        for(int j = 0 ;j<s12;j++){
            if(a[i]==s2[j]&&c=='R'){
                    answer+=s2[j-1];
            }else if(a[i]==s2[j]&&c=='L'){
                    answer+=s2[j+1];
            }
        }
        for(int j = 0 ;j<s13;j++){
            if(a[i]==s3[j]&&c=='R'){
                    answer+=s3[j-1];
            }else if(a[i]==s3[j]&&c=='L'){
                    answer+=s3[j+1];
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}
