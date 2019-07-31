#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int answer=0,ss = s.length(),cont=0;
    for(int i =  0 ;i<ss;i++){
        if(s[i]==s[i+1]){
            cont++;
            if(cont==5){
            answer++;
            cont = 0;
            }
        }else if(cont){
        answer++;
        cont = 0;
        }else{
        answer++;
        }
    }
    printf("%d",answer);

    return 0;
}
