#include <bits/stdc++.h>

using namespace std;
int arr[10009];
int a[105][105];
int main()
{
    int n;
    int x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int index = 1;
    int temp=0,tempi;
    for(int i=1;i<=n;i++){
            int temp_i = i;
            int j =1;
        while(j<=i){
            arr[index]=a[temp_i][j];

            j++;
            temp_i--;
            index++;

        }


    }
    for(int j=2;j<=n;j++){
            int temp_i = n;
            int temp_j = j;
        while(temp_j<=n){
            arr[index]=a[temp_i][temp_j];
            //printf("%d ",a[temp_i][temp_j]);
            temp_i--;
            temp_j++;
            index++;

        }


    }


   for(int i=1;i<=n*n;i++)printf("%d ",arr[i]);

    return 0;
}
