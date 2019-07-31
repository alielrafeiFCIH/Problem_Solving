#include <bits/stdc++.h>

using namespace std;
long long  cnt = 0;
int n,m;
vector<int>comp;
void fact(int i = 0,int value = 0){
    if(i == m){
        cnt++;
        return ;
    }
    for(int j = value+1;j<=n;j++){
        comp.push_back(j);
        fact(i+1,j);
        comp.pop_back();
    }
}
int main()
{


    while(cin>>n>>m){
        if(n==0&&m==0)break;
        fact();
        cout<<n<<" things taken "<<m<<" at a time is "<<cnt<<" exactly."<<endl;
        cnt=0;

    }

    return 0;
}
