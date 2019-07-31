#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int row[100];
    int colum[100];
    memset(row,0,sizeof(row));
    memset(colum,0,sizeof(colum));
    scanf("%d",&n);
    char c;
    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
            scanf(" %c",&c);
            if(c=='C')row[i]++,colum[j]++;

        }
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(row[i]>1){
           count+= ((row[i]*(row[i]-1))/2);
        }
        if(colum[i]>1){
            count+=((colum[i]*(colum[i]-1))/2);
        }
    }
    cout<<count;

    return 0;
}
