
//#define lp(i,n) for(int i=0;i<n;i++)
//using namespace std;
//map < string , int >mp;
//set<string>v;
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    string s;
//    lp(i,n){
//    cin>>s;
//    mp[s]++;
//    v.insert(s);
//    }
//    int mx = 0;
//    string s1 ;
//
//    for (set<string>::iterator it=v.begin(); it!=v.end(); ++it){
//        string x = *it;
//        if(mx<mp[x]){
//            s1=*it;
//            mx=mp[x];
//            }
//    }
//    cout<<s1;
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    scanf("%d",&n);
    string   team1 ,team2="",s;
    int goal1,goal2=0;
    cin>>team1;
    goal1++;
    for(int i  = 1;i<n;i++){
        cin>>s;
        if(team1==s){
            goal1++;
        }else{
            if(team2.empty()){
                team2=s;
            }
            goal2++;
        }

    }
    goal1>goal2?cout<<team1:cout<<team2;
    return 0;
}
