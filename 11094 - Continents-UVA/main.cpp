#include <bits/stdc++.h>

using namespace std;
char adj[25][25];
int dp[25][25];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int n,m;
char king_pos;
int counter ;
bool is_valid(int x){
    return x>=0&&x<n ;

}
int over_flow(int y){
    if(y<0)return m-1;
    if(y>=m) return 0;
    return y;
}
void dfs(int x,int y){
    dp[x][y]=1;
    counter++;
    for(int i =0;i<4;i++){
        int x_dir = x+dx[i];
        int y_dir = over_flow(dy[i]+y);
        if(is_valid(x_dir)&&!dp[x_dir][y_dir]&&adj[x_dir][y_dir]==king_pos)
            dfs(x_dir,y_dir);
    }

}
int main()
{
    while(cin>>n>>m){
        int pos_x,pos_y;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf(" %c",&adj[i][j]);
            }
        }
        scanf("%d %d",&pos_x,&pos_y);
        king_pos = adj[pos_x][pos_y];
        dfs(pos_x,pos_y);
        int ans =0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
               if(!dp[i][j]&&adj[i][j]==king_pos){
                counter = 0;
                dfs(i,j);
                ans = max(counter,ans);
               }

            }
        }
        memset(dp,0,sizeof(dp));
        printf("%d\n",ans);

    }
    return 0;
}
