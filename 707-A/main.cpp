#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char s;
    int flag = 0;
    for(int i =0 ;i<n;i++){
        for(int j = 0 ;j < m ;j ++){
            scanf(" %c",&s);
            if(!flag){
            if(s!='B'&&s!='W'&&s!='G')
                flag = 1;
            }
        }
    }
    if(flag){
            printf("#Color");
    }else{
    printf("#Black&White");
    }
    return 0;
}
