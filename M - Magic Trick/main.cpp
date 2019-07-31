#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string , int>P[10];
    int n;
    cin>>n;
    for(int i=0 ; i<n ; ++i){
        string s1;
        int x;
        cin>>s1>>x;
        P[i].first=s1;
        P[i].second=x;
    }
    int counter=0;
    for(int i=1 ; i<=100 ; ++i){
        int q=i;
        bool temp=true;
        for(int j=0 ; j<n ; ++j){
            if(P[j].first=="ADD")q+=P[j].second;
            else if(P[j].first=="MULTIPLY")q*=P[j].second;
            else if(P[j].first=="SUBTRACT"){q-=P[j].second;if(q<0)temp=false;}
            else if(P[j].first=="DIVIDE"){if(q%P[j].second!=0)temp=false;q/=P[j].second;}
        }
        if(!temp)++counter;
    }
    cout<<counter;
    return 0;
}
