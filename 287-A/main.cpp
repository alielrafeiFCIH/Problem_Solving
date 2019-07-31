#include <bits/stdc++.h>

using namespace std;
char a[4][4];
int main()
{
    bool flag = false;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        int c = 0;
        int c1= 0;
        for(int j = 0;j<3;j++){
            if(a[i][j]=='#'){
                    c++;
            if(a[i][j]==a[i][j+1]){
                 c++;
                }else{
                    c1++;
                }
                if(a[i][j]==a[i+1][j]){
                    c++;
                }else{
                    c1++;
                }
                if(a[i][j]==a[i+1][j+1]){
                    c++;
                }else{
                c1++;
                }
            }else if(a[i][j]=='.'){
                c1++;
                if(a[i][j]==a[i][j+1]){
                 c1++;
                }else{
                    c++;
                }
                if(a[i][j]==a[i+1][j]){
                    c1++;
                }else{
                    c++;
                }
                if(a[i][j]==a[i+1][j+1]){
                    c1++;
                }else{
                c++;
                }


            }

            if(c==3||c1==3){
            flag = true;

            }else if(c==4||c1==4){
                flag=true;
            }else if(!flag){
                flag = false;
            }
            c=0;
            c1=0;
        }
    }
    flag?printf("YES"):printf("NO");
    return 0;
}

