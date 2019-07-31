#include <bits/stdc++.h>

using namespace std;
int row[105];
int col[105];
int main()
{
    int n;
    int k;
    int num ;
    scanf("%d%d",&n,&k);
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
           if(i==j)printf("%d ",k);
           else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
