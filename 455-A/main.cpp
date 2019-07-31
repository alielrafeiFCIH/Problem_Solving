#include <bits/stdc++.h>

using namespace std;
long long numbers[100009];
int main()
{
    int n;
    int ans = 0,x;
    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        scanf("%d",&x);
            numbers[x]+=x;

    }
   for(int i = 2;i<=100000;i++){
    numbers[i]=max(numbers[i-1],numbers[i]+numbers[i-2]);
   }
    cout<<numbers[100000];


    return 0;
}
