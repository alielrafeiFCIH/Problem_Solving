#include <bits/stdc++.h>

using namespace std;
int a[300005];
int b[300005];
int main()
{
    int n;
    scanf("%d",&n);
    if(!(n&1))printf("NO");
    else{
        printf("YES\n");

        for(int i=1,j=1;i<=2*n;i+=2){
            a[j]=i;
            b[j]=i+1;
            j++;
        }
        for(int i=1;i<=n;i++){
            if(i%2==0){
                printf("%d ",b[i]);
            }else{
                printf("%d ",a[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(i%2==0){
                printf("%d ",a[i]);
            }else{
                printf("%d ",b[i]);
            }
        }

    }
    return 0;
}
