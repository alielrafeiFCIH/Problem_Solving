#include <bits/stdc++.h>

using namespace std;
int arr[500005];
int main()
{
    int n;



    scanf("%d",&n);
    int start=n-2,end=n-1;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int count =0;
    for(int i =n/2-1;i>=0;i--){
        if(arr[i]*2<=arr[end])count++,end--;
        else start--;

    }

    printf("%d",n-count);
    return 0;
}

