#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n){
        int mid = (int)ceil((double)n/2.0);
        int ollie=0,stan=0,x,y,x_mid,y_mid;
        vector<pair<int,int> >v;
        for(int i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            if(i==mid)x_mid=x,y_mid=y;
            else v.push_back(make_pair(x,y));
        }
        int siz = v.size();
        for(int i=0;i<siz;i++){
            if(v[i].first==x_mid||v[i].second==y_mid){
                continue;
            }else if(v[i].first>x_mid&&v[i].second>y_mid){
                stan++;
            }else if(v[i].first<x_mid&&v[i].second<y_mid){
                stan++;
            }else if(v[i].first<x_mid&&v[i].second>y_mid){
                ollie++;
            }else if(v[i].first>x_mid&&v[i].second<y_mid){
                ollie++;
            }
        }
        printf("%d %d\n",stan,ollie);
        scanf("%d",&n);
    }
    return 0;
}
