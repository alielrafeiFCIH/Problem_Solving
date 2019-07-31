#include <bits/stdc++.h>

using namespace std;
char a[500][500];
int x,y;
bool valid(int xx,int yy){
    if(xx<0||xx>=x||yy<0||yy>=y)
        return false;

    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){

        scanf("%d%d",&x,&y);
        pair<int,int>curt;
        pair<int,int>exit;
        for(int j =0;j<x;j++)
        for(int k =0;k<y;k++){
            cin>>a[j][k];
            if(a[j][k]=='S')
                curt.first=j,curt.second=k;
            if(a[j][k]=='E')
                exit.first=j,exit.second=k;
        }
        queue< pair<int,int> >q;
        int dirx [4] ={0,0,1,-1};
        int diry [4] ={1,-1,0,0};
        q.push(curt);
        int dep =0;
        for(;!q.empty();dep++){
            while(!q.empty()){
                pair<int,int>pos = q.front();
                q.pop();
                for(int z =0;z<4;z++){
                    int xx = pos.first+dirx[z];
                    int yy = pos.second+diry[z];
                    pair<int,int>temp;

                    if(valid(xx,yy)){temp = {xx,yy};
                        if(a[xx][yy]=='.'||a[xx][yy]=='A'||a[xx][yy]=='B'||a[xx][yy]=='C')
                        q.push(temp);
                    if(temp.first==exit.first&&temp.second==exit.second){
                        cout<<dep+1;
                        return 0;
                    }

                    }


                }
            }
        }
        printf("-1");
    }

    return 0;
}
