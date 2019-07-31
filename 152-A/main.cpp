#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    string s,s1;
    vector<string>v;
    int subjects[100];
    for(int i = 0 ;i<100;i++)subjects[i]=-1;

    for(int i = 0 ; i<n;i++){
        cin>>s;
        v.push_back(s);
        for(int j = 0;j<100;j++){
            if(v[i][j]-'0'>=subjects[j]){
            subjects[j]=v[i][j]-'0';
            }
        }
    }
    int ss = v.size();
    int temp = 0 ,answer = 0;
    for(int i = 0 ;i<ss;i++){

            for(int k=0 ;k<m;k++){
                if(v[i][k]-'0'==subjects[k]){
                    temp = 1;
                }
            }
            answer+=temp;
            temp=0;

    }
    printf("%d",answer);

    return 0;
}
