#include <bits/stdc++.h>

using namespace std;
char p[100][100];
int n,m;
char c;
map<char,bool>mp;
bool is_valid(int x,int y){
    char z = p[x][y];
    if(p[x][y]=='.'||x<0||x>=n||y>=m||y<0||p[x][y]==c||mp[z])return false;
    return true;
}
int President_deputies(int x,int y){
    int sum = 0 ;
    if(is_valid(x+1,y)){sum++; char z = p[x+1][y]; mp[z]=true;}
    if(is_valid(x,y+1)){sum++; char z = p[x][y+1]; mp[z]=true;}
    if(is_valid(x-1,y)){sum++; char z = p[x-1][y]; mp[z]=true;}
    if(is_valid(x,y-1)){sum++; char z = p[x][y-1]; mp[z]=true;}
    return sum ;
}
int main()
{

    scanf("%d%d",&n,&m);
    cin>>c;
    for(int i = 0;i<n;i++)
        for(int j = 0 ;j<m;j++){
            cin>>p[i][j];
            char x = p[i][j];
            if(x!='.')mp[x]=false;
        }

    int count = 0 ;
    for(int i = 0;i<n;i++)
        for(int j = 0 ;j<m;j++){
                if(p[i][j]==c){
                    count +=President_deputies(i,j);
                }
        }
        cout<<count;

    return 0;
}
