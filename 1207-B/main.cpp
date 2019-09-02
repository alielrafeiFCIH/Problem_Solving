#include <bits/stdc++.h>

using namespace std;
int B[51][51];
int A[51][51];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x =0, y =0;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    set<pair<int ,int>>s;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=m-1;j++){
            if(A[i][j]==1&&A[i][j+1]==1&&A[i+1][j]==1&&A[i+1][j+1]==1){
                s.insert(make_pair(i,j));
                B[i][j]=B[i][j+1]=B[i+1][j]=B[i+1][j+1]=1;
            }
        }
    }
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
           if(A[i][j]!=B[i][j]){
            printf("-1");
            return 0;
           }
        }

    }
    if(s.size()){
            printf("%d\n",s.size());
            int size =0;
            for(set<pair<int,int>>::iterator ite = s.begin();ite!=s.end();ite++){
        //cout<<ite.first;
        printf("%d %d\n",ite->first,ite->second);
    }
    }else{
        printf("0");
    }

    return 0;
}
