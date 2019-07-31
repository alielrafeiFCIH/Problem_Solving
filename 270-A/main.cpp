#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[180];
    double p[601];
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 3 ;i<=600;i++){
        p[i]=(i-2)*180/(double)i;
    }
    int f=0;
    for(int i = 0 ;i<n;i++){
        for(int j = 3 ;j<=600;j++){
            if(a[i]==p[j]){
                printf("YES\n");
                f=0;
                break;
            }else{
            f=1;
            }
        }
        if(f==1){
            printf("NO\n");
            f=0;
        }
    }
    return 0;
}
