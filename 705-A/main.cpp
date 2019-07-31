#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s = "I hate ";
    string s1 = "I love ";
    string s2 = "that ";
    string answer ="I hate ";
    scanf("%d",&n);
    for(int i = 1 ;i<n;i++){
        if(i%2!=0){
                answer+=s2+s1;
        }else{
            answer+=s2+s;
        }
    }
    answer+="it";
    cout<<answer;
    return 0;
}
