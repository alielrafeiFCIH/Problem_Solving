#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
     scanf("%d",&a[0]);
    int mx = a[0];
    for(int i = 1 ;i<n;i++){
        scanf("%d",&a[i]);
     mx = max(a[i],mx);
//     m = min(a[i],m);
    }
    int answer = 0;
    for(int i = 0 ;i<n;i++){
        if(a[i]<mx){
            answer+=(mx-a[i]);
        }
    }
    printf("%d",answer);
    return 0;
}
