#include <bits/stdc++.h>

using namespace std;
int winner(long long a,long long b){
    if(b==0)return 0;
    if(a/b>1){
        return 1;
    }else {
        return winner(b,a-b)+1;
    }
}
int main()
{
    long long  s,o;
   cin>>s>>o;
    while(s!=0&&o!=0){

        if(s<o)
            swap(s,o);

        const int  count = winner(s,o);
        if(count%2==1){
                printf("Stan wins\n");
        }else{
            printf("Ollie wins\n");
        }
        cin>>s>>o;
    }
    return 0;
}
