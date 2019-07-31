#include <bits/stdc++.h>

using namespace std;


bool f = true;
bool valid(int x,int y,int size){
    if(x<0||y<0||x>=size||y>=size)return false;

    return true;
}

void dfs(int x,int y,int size,vector< vector<char > >& gg){

    if(!valid(x,y,size) || gg[x][y]=='x' || gg[x][y]=='0') return  ;

    if(gg[x][y]=='2')gg[x][y]='x';
    else f = false,gg[x][y]='x';

    dfs(x,y+1,size,gg);
    dfs(x+1,y,size,gg);
    dfs(x,y-1,size,gg);
    dfs(x-1,y,size,gg);

    return ;

}
int countMatches(vector<string> grid1, vector<string> grid2) {
 vector< vector<char> >gg1(grid1.size());
 vector< vector<char> >gg2(grid2.size());
 int mn = min(grid1.size(),grid2.size());
 vector< vector<char> >gg3(mn);

    for(int i = 0;i<grid1.size();i++){
            string s = grid1[i];
        for(int j = 0;j<s.length();j++){
            gg1[i].push_back(s[j]);
        }
    }
    for(int i = 0;i<grid2.size();i++){
            string s = grid2[i];
        for(int j = 0;j<s.length();j++){
            gg2[i].push_back(s[j]);
        }
    }
    for(int i = 0;i<gg3.size();i++){
        for(int j = 0;j<gg3.size();j++){
            gg3[i].push_back('0');
        }
    }
     for(int i =0 ;i<gg3.size();i++){
        for(int j=0;j<gg3.size();j++){
            if(gg1[i][j]==gg2[i][j]&&gg1[i][j]=='1'){
                gg3[i][j]='2';
            }else if(gg1[i][j]!=gg2[i][j]&&gg1[i][j]=='1'||gg2[i][j]=='1'){
                gg3[i][j]='1';
            }
        }
    }


    int region = 0;
    for(int i = 0;i<gg3.size();i++){
        for(int j = 0;j<gg3.size();j++){
            if(gg3[i][j]=='1'||gg3[i][j]=='2'){
               dfs(i,j,gg3.size(),gg3);
                if(f){
                region++;
                }else{
                    f = true;
                }
            }
        }
    }

    return region;
}


int main()
{
    int n;
    vector<string> grid1;
    vector<string> grid2;
    scanf("%d",&n);
    string s;
    for(int i = 0;i<n;i++)cin>>s,grid1.push_back(s);
    scanf("%d",&n);
    for(int i = 0;i<n;i++)cin>>s,grid2.push_back(s);

    cout<<countMatches(grid1,grid2);

    return 0;
}


