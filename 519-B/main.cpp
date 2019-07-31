#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    scanf("%d",&n);
    int x;
    int answer=0,sum1=0,temp=0;
    for(int i = 0 ;i<3;i++){
        for(int j =0 ;j<n-i;j++){
        scanf("%d",&x);
        sum1+=x;
        }
        if(temp==0){
            temp = sum1;
        }else{
        answer = temp-sum1;
        temp = sum1;
        printf("%d\n",answer);
        answer=0;
        }
        sum1 = 0 ;
    }
    return 0;
}
