#include <bits/stdc++.h>

using namespace std;

bool valid(int i,int j,int size){
    if(i<0||j>=size||j<0||i>=size)return false;

   return true;

}
int roverMove(int matrixSize, vector<string> cmds) {
    int a[20][20];
      for(int i = 0 ;i<matrixSize;i++)
          for(int j = 0 ;j<matrixSize;j++)a[i][j]=(matrixSize*i)+j;
    int ans = 0;
    int x = 0,y=0;
    for(int i =0 ;i<cmds.size();i++){
        if(cmds[i]=="RIGHT"){
            if(valid(x,y+1,matrixSize)){
                y++;
                ans = a[x][y];
            }
        }else if(cmds[i]=="LEFT"){
            if(valid(x,y-1,matrixSize)){
                y--;
                ans = a[x][y];
            }
        }else if(cmds[i]=="UP"){
             if(valid(x-1,y,matrixSize)){
                x--;
                ans = a[x][y];
            }
        }else if(cmds[i]=="DOWN"){
            if(valid(x+1,y,matrixSize)){
                x++;
                ans = a[x][y];
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    int m;
    string s;
    scanf("%d%d",&n,&m);
    vector<string>cmds;
    for(int i = 0;i<m;i++){
        cin>>s;
        cmds.push_back(s);
    }
   cout<< roverMove(n,cmds);
    return 0;
}
