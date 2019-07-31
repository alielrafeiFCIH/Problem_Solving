#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0;
    char x;
    char a[55];
    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        scanf(" %c",&x);
        if(x!='7'&&x!='4'){
            flag =1;
        }else{
        a[i]=x;
        }
    }
    if(flag==1){
        printf("NO");
        return 0;
    }
    int s = 0,e=n-1,sum1=0,sum2=0,temp=0;
    int mid = s+e/2;
    for(int i = 0 ;i<=mid;i++){
        temp = a[i]-'0';
        sum1+=temp;
    }

    temp=0;
    for(int i = mid +1;i<n;i++){
        temp = a[i]-'0';
        sum2+=temp;
    }

    if(sum1==sum2){
        printf("YES");
    }else{
    printf("NO");
    }
    return 0;
}
