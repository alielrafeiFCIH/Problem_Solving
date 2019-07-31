#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[101];
    int answer = 0;
    scanf("%d",&n);

    for(int i = 1 ;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)answer++;
    }
//    if(n==1){
//
//        if(a[1]==1){
//        printf("0");
//        }else{
//        printf("1");
//        }
//        return 0;
//    }
    int temp =answer,temp1=answer,flag=0;
    for(int i = 1;i<=n;i++){
        for(int j = i;j<=n;j++){
            for(int k =i;k<=j;k++){
                if(a[k]==0){
                    temp++;

                }else{
                temp--;

                }

            }
            flag++;
        if(flag == 1){
            answer = temp;
            temp = temp1;
        }else{
            answer = max(answer,temp);
            temp = temp1;
        }
        }
    }
    printf("%d",answer);
    return 0;
}
