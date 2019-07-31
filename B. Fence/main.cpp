#include <bits/stdc++.h>

using namespace std;
int a[10000006];
int main()
{
    int n,k;

    scanf("%d%d",&n,&k);
    for(int i =0 ;i < n; i++){
        scanf("%d",&a[i]);
    }
    int ans = 0;


    for(int i = 0 ; i<k ;i++){
        ans+=a[i];
    }
    //int temp;
    int sum=ans;
    int j=0;
    //temp=ans;
    int index=1;
    for(int i = k ;i<n;i++,++j){
        ans-=a[j];
        ans+=a[i];
        if(ans<sum){
            sum=ans;
            index = j+2;
        }
    }
    printf("%d",index);
//    for(int i =0 ; i+k-1<n ;i++){
//        for(int j = i ;j<=i+k-1;j++){
//                sum+=a[j];
//        }
//        if(sum<ans){
//            index = i+1;
//            ans=sum;
//        }
//        sum=0;
//    }
   // printf("%d",index);
    return 0;
}
