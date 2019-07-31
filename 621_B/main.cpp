#include <bits/stdc++.h>

using namespace std;
int x[200006];
int y[200006];
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    int total =0;
    for(int i =0;i<n;i++){
        scanf("%d%d",&a,&b);
        total+=(x[a+b]++)+(y[1002+a-b]++);

        }
    printf("%d",total);

    return 0;
}
