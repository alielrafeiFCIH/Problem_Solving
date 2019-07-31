#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0 ; i<(int)n ;i++)
using namespace std;
int count = 0;
char adj[100][100];
string x = "IEHOVA#";
vector<string> ans;

bool valid (int r ,int c,int n,int m){
    if((r>=0&&c<n)&&(r<m&&c>=0))
        return true;
    return false;
}
bool belong(char c){
    int ss = x.size();
    for(int i = 0;i<ss;i++){
        if(c==x[i]){
            return true;
        }
    }
    return false;
}
void countReachalbleCells(int r, int c,int n ,int m)
{
    if( !valid(r,c,n,m) || adj[r][c]=='1')
		return ;

    adj[r][c]='1';

    if(belong(adj[r-1][c])){ans.push_back("forth");
	countReachalbleCells(r-1, c,n,m) ;
    }

    if(belong(adj[r][c+1])){ans.push_back("right");
    countReachalbleCells(r, c+1,n,m);
    }
    if(belong(adj[r][c-1])){ans.push_back("left");
    countReachalbleCells(r, c-1,n,m);
    }

}
int main()
{
    int cases ;
    int n,m;
    scanf("%d",&cases);
    lp(i,cases){
        scanf("%d%d",&m,&n);
        int s1,e1;

       lp(j,m)
            lp(k,n){
               char a;
               cin>>a;
               adj[j][k]=a;
               if(a=='@'){
                s1=j;
                e1=k;
               }

            }

        countReachalbleCells(s1,e1,n,m);
        int ss = ans.size();
        cout<<ans[0];
        for(int j =1;j<ss;j++)
        cout<<" "<<ans[j];

        printf("\n");
        ans.clear();


    }
//2
//6 5
//PST#T
//BTJAS
//TYCVM
//YEHOF
//XIBKU
//N@RJB
//5 4
//JA#X
//JVBN
//XOHD
//DQEM
//T@IY
    return 0;
}
