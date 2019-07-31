#include <bits/stdc++.h>

using namespace std;

vector<int>v;
set<int>s;
map<int,int>mp;
int main()
{
    int t,n;
    int x;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        scanf("%d",&n);
//        int mn = 1e8+5;

        for(int i =1;i<=n;i++){
                scanf("%d",&x);
            s.insert(x);
            mp[x]++;

        }

        int cnt = 0;
        for (set<int>::iterator it=s.begin(); it!=s.end(); ++it){
                int num = *it;
            if(mp[num]>=4){cout<<*it<<" "<<*it<<" "<<*it<<" "<<*it;
                cnt=4;
                break;

            }

        }
        if(cnt==0){

            for (set<int>::iterator it=s.begin(); it!=s.end(); ++it){
                int num = *it;
                if(mp[num]>=2){//wrong answer because of >= 2 not == 2;
                    v.push_back(num);
                }

            }
            sort(v.begin(),v.end());
            int siz = v.size();
            int   a,b;
            double  mn = 1e9;
           for(int i = 0;i<siz-1;i++){
            double  eq1 =(double)2.0*(v[i]+v[i+1]);
            double  eq2 = (double)eq1*eq1;
            double eq3 = (double)v[i]*v[i+1];
            double eq = eq2/eq3;
            if(eq<mn){
                mn = eq ;
                a= v[i];
                b= v[i+1];
            }
           }
           cout<<a<<" "<<a<<" "<<b<<" "<<b;
           v.clear();
        }
        printf("\n");
        s.clear();
        mp.clear();


    }
    return 0;
}
