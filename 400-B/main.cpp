#include <bits/stdc++.h>

using namespace std;

int x,y;
char mat[2001][2001];

int main()
{
    cin>>x>>y;
    int g=-1,s=-1;
    set<int>myset;
    bool flag = false ;
    for(int i =0;i<x; i++){
        for(int j =0; j<y;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='G')g=j;
            else if(mat[i][j]=='S')s=j;


        }
        if(s!=-1&&g!=-1){
             if(s>g){
                    myset.insert(s-g);
             }else {
                    printf("-1");
                    return 0;
             }
        }

    }

    cout<<myset.size();

    return 0;
}
