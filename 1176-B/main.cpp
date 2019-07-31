#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     int sum=0,temp,n;
     int arr[3];
     scanf("%d",&t);
    while(t--){
        arr[0]=arr[1]=arr[2]=0;
        sum = 0;
        scanf("%d",&n);
        for(int i =0;i<n;i++){
            scanf("%d",&temp);
            arr[temp%3]++;

    }
    sum = arr[0];
    int mn=min(arr[1],arr[2]);
    arr[1]-=mn;
    arr[2]-=mn;
    sum+=mn+(arr[1]/3)+(arr[2]/3);
    printf("%d\n",sum);
    }
    return 0;
}
