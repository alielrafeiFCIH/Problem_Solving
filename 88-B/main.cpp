#include <bits/stdc++.h>

using namespace std;
char a[30][30];
int n,m,x;
map<char,double>mp;
bool valid(char c){
    for(int i = 0 ;i<n;i++){
        for(int j =0;j<m;j++){
            if(c==a[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main()
{

    bool shift = false;
    bool small_only = true;
    char c ;
    scanf("%d%d%d",&n,&m,&x);
    for(int i = 0 ;i<n;i++)
        for(int j = 0 ;j<m;j++){
        scanf(" %c",&c);
        if(c=='S')shift = true;
        a[i][j]=c;
        mp[c]=1e8+5;
    }

    int k;
    string s;
    scanf("%d",&k);
    cin>>s;
    int count = 0;
    for(int i = 0 ;i<n;i++)
        for(int j = 0 ;j<m;j++){
         double ans1 =1e8+5;
            for(int l = 0 ;l<n;l++){
                for(int z=0;z<m;z++){
                    if(a[l][z]=='S'){
                        int eq1 = abs(i-l);
                        int eq2 = abs(j-z);
                        int eq3 = eq1*eq1;
                        int eq4 = eq2*eq2;
                        double ans = sqrt(eq3+eq4);
                    ans1 = min(ans,ans1);
                    }
                }
            }
                char h = a[i][j];
            mp[h]=min(ans1,mp[h]);
            }








    for(int i = 0;i<s.length();i++){
        if(valid(tolower(s[i]))){
        if(s[i]>='A'&&s[i]<='Z'){
        small_only = false;
            if(shift){
                if(valid(tolower(s[i]))){
                    char h = tolower(s[i]);
                    double num = mp[h];
                    if(mp[h]>(double)x)count++;
                }else{
                printf("-1"); return 0;
                }
            }else{
                printf("-1"); return 0;
            }
        }
        }else {
              printf("-1"); return 0;
        }
    }
    if(count==0&&shift==false&&small_only==false){
       printf("-1"); return 0;
    }
    printf("%d",count);
    return 0;
}
