#include <bits/stdc++.h>
#define lp(i,n) for(int i=0 ; i<n ; i++)
using namespace std;
char adj[100][100];
int vis[100][100];
int cnt = 0;
int cnt1 = 0;
bool valid(int r,int c,int n){
    if((r>=0&&c<n)&&(c>=0&&r<n))
        return true;

    return false;
}
void cntReachalbleCells(int r, int c,int n)
{
    if(!valid(r,c,n)  || adj[r][c] == '.' || vis[r][c] == 1)
		return;

    if(adj[r][c] == 'x')
        cnt++;
    if(adj[r][c] == '@')
        cnt1++;

	vis[r][c] = 1;


	cntReachalbleCells(r, c-1,n);
    cntReachalbleCells(r, c+1,n);
    cntReachalbleCells(r-1, c,n);
    cntReachalbleCells(r+1, c,n);
}
int main()
{
    int n;
    int x;
    scanf("%d",&n);
    char c;
    int ships = 0;
    lp(i,n){
        scanf("%d",&x);
        memset(vis,0,sizeof(vis));
            lp(j,x){
                lp(k,x){
                cin>>c;
                    adj[j][k] = c;
                }
            }
            ships = 0;
            lp(j,x){
                lp(k,x){
                cnt = 0;
                cnt1 = 0;
                cntReachalbleCells(j,k,x);
                if(cnt){
                 ships++;
                }
                }
            }
            printf("Case %d: %d\n",i+1,ships);
    }

    return 0;
}
//..x@.
//.x...
//..xxx
//.@...
//.@.xx
