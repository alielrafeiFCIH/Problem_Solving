#include <bits/stdc++.h>

using namespace std;
int hash_count[1009];
int memo [1000+9][1000+9][3];
int n,m,x,y;

int solve_dp(int column,int wid,int prev){
    if(column==m){
        if(wid<x||wid>y)
        return 100000000;

        return 0;
    }
    int &ans = memo [column][wid][prev];

    if(ans!=-1){
        return ans;
    }

    int dots=100000000;
    if(prev==2||(prev==0&&wid+1<=y)||(prev==1 && wid>=x))
    dots = hash_count[column]+solve_dp(column+1,(prev==0 ? wid+1 : 1),0);

    int hashs = 100000000;
    if(prev==2||(prev==1&&wid+1<=y)||(prev==0 && wid>=x))
    hashs = n-hash_count[column]+solve_dp(column+1,(prev==1 ? wid+1 : 1),1);

    ans = min(hashs,dots);

    return ans;

}
int main()
{
    char ch;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            scanf(" %c",&ch);

            if(ch=='#')hash_count[j]++;
        }
    }
    memset(memo,-1,sizeof(memo));
    printf("%d",solve_dp(0,0,2));
    return 0;
}
