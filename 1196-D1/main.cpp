#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;
    scanf("%d",&n);
    while(n--){
    string s;
    int k,x;
    scanf("%d%d",&x,&k);
    cin>>s;
    string rgb="RGB";
    int ans = 1e9;
    vector<int>v(x);
    if(k==1){printf("0\n");continue;
    }else{
        for(int i =0;i<3;i++){
            int count_chg = 0;
            for(int j =0;j<x;j++){
                if(s[j]!=rgb[(j+i)%3])v[j]=1;
                else v[j]=0;
                count_chg+=v[j];
                if(j>=k)count_chg-=v[j-k];//printf("%d\n",count_chg);
                if(j>=k-1)ans=min(ans,count_chg);
            }

        }
         printf("%d\n",ans);
    }

    }



    return 0;
}
