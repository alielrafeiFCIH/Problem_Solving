#include <bits/stdc++.h>
#define lp(i,n) for(int i = 0 ; i<n ; i++)
using namespace std;
char maze [300][300];
int main()
{
    int n;
    char c;
    int flag = 1;
    scanf("%d",&n);
    lp(i,n)
        lp(j,n){
            cin>>c;
            maze[i][j]=c;
        }
char x = maze[0][0];
char y = maze[0][1];
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                if(maze[i][j]==x){
                    continue;
                }else{
                    flag=0;
                    break;
                }
            }else{
                if(maze[i][j]==y){
                    continue;
                }else{
                    flag=0;
                    break;
                }
            }

        }
        }
        flag&&x!=y?printf("YES"):printf("NO");

//    int flag = 1,j;
//    char sample1 = maze[0][0];
//    for(int i = 0, j = n-1;i<n,j>=0;i++,j--){
//        if(flag && (maze[i][i]==sample1||maze[i][i]=='1')){
//            maze[i][i]='1';
//            flag = 1;
//        }else{
//            flag = 0;
//            break;
//        }
//        if(flag &&(maze[i][j]==sample1||maze[i][j]=='1')){
//            maze[i][j]='1';
//            flag=1;
//        }else{
//            flag = 0;
//            break;
//        }
//    }


//
//   if(flag==1){
//        int flag2=1;
//        int sample = maze[0][1];
//        lp(i,n)
//            lp(j,n){
//                if(flag2 && maze[i][j]==sample && maze[i][j]!='1' && maze[i][j]!=sample1){
//
//                    flag2=1;
//                }else{
//                    if(maze[i][j]=='1'){
//
//                    }else{
//                        flag2=0;
//                        break;
//                    }
//                }
//            }
//            if(flag2==0){
//                printf("NO");
//            }else{
//                printf("YES");
//            }
//   }else{
//    printf("NO");
//   }

    return 0;
}

