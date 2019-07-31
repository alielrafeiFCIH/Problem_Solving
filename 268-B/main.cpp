#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x = n-1;
    int answer = n;
    for(int i = 1 ;i<n;i++){
        answer = answer + x*i;
        x--;
    }
    printf("%d",answer);

    return 0;
}
