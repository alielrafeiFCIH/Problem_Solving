#include <bits/stdc++.h>

using namespace std;
bool valid(string s){

    int start =0,end = s.length()-1;
    while(start<end){
            if(s[start]=='a'&&s[end]=='a'){
                start++;
                end--;
            }else if(s[start]=='a'&&s[end]=='z'){
                return false;
            }else if(s[start]=='z'&&s[end]=='a'){
                return false;

            }else if(s[start]=='z'&&s[end]=='z'){
               start++;
                end--;
            }else if(s[start]=='z'){
                 if(abs(s[start]-s[end])==2||abs(s[start]-s[end])==0){
                    start++;
                    end--;
                }else{
                    return false;
                }

            }else if(s[start]=='a'){
                  if(abs(s[start]-s[end])==2||abs(s[start]-s[end])==0){
                    start++;
                    end--;
                }else{
                    return false;
                }
            }else if(s[end]=='a'){
                  if(abs(s[start]-s[end])==2||abs(s[start]-s[end])==0){
                    start++;
                    end--;
                }else{
                    return false;
                }
            }else if(s[end]=='z'){
                  if(abs(s[start]-s[end])==2||abs(s[start]-s[end])==0){
                    start++;
                    end--;
                }else{
                    return false;
                }
            }else{
                if(abs(s[start]-s[end])==2||abs(s[start]-s[end])==0){
                    start++;
                    end--;
                }else{
                    return false;
                }

            }
    }
}
int main()
{
    int n,t;
    string s;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&t);
        cin>>s;
        if(valid(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
