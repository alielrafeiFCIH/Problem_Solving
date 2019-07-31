#include <bits/stdc++.h>
#define matrix_size 10
using namespace std;
int l [matrix_size][matrix_size];
int main()
{
    int term;
    int count=1;
    for(int i =1;i<=matrix_size;i++){
        for(int j=1;j<=i;j++){
            l[i][j]=count;
            count++;
        }
    }
    for(int i =1;i<=matrix_size;i++){

    for(int j=1;j<=i;j++){
            printf("%d ",l[i][j]);
    }
    printf("\n");
    }

    while(scanf("%d",&term)){
    bool flag = true;
    for(int i =1;i<=matrix_size;i++){
        for(int j=1;j<=i;j++){
            if(l[i][j]==term){
                printf("TERM %d IS %d/%d\n",term,i,j);
                flag = false;
                break;
            }
        }
        if(!flag)break;
    }
    }
    return 0;
}
