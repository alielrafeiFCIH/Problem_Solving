#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int count_sum = 0;
    for(int i =1;i<=n;i++){
        if(i<10){
            if(a<=i&&i<=b)count_sum+=i;
        }else{
            int temp_count=0;
            int temp1 = i;
            int temp = 0;
            while(temp1!=0){
                temp = temp1%10;
                temp_count+=temp;
                temp1 /= 10;
            }
            if(temp_count>=a&&temp_count<=b){
            count_sum+=i;

            }
        }
    }
    printf("%d",count_sum);

    return 0;
}
