#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d",&n);
    while(n!=0){
    int a=0,b=0;
    int counter =0;
    int one =1;
    int cnt=__builtin_popcount(n);
    while(counter!=cnt){

        if((n&one)&&counter%2==1){
            a=a|one;
            counter++;
        }else if((n&one)&&counter%2==0){
            b=b|one;
            counter++;
        }
        one = one<<1;
    }
    printf("%d %d\n",b,a);
    scanf("%d",&n);
    }
    return 0;
}
