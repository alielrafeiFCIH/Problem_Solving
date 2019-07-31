#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p ,q,l,r;
    scanf("%d%d%d%d",&p,&q,&l,&r);
    int a[1001];
    int x,y;
    vector< pair<int,int> > v;
    vector< pair<int,int> >v1;
    for(int i = 0 ;i<p;i++){
        scanf("%d%d",&x,&y);
        v.push_back(make_pair(x,y));
    }
    int flag =0;
    for(int i = 0;i<1001;i++)a[i]=0;
    int vs = v.size();
    int ans =0;
    for(int i = 0 ;i<q;i++){
            scanf("%d%d",&x,&y);
            for(int j = 0 ;j<vs;j++){
                int mx = v[j].second-x;
                int mn = v[j].first-y;
                if(mx<l||mn>r){
                    continue;
                }
                for(int m = max(l,mn);m<=min(r,mx);m++){
                    if(a[m]!=1){
                        ans++;
                        a[m]=1;
                    }

                }
            }
    }
//    int vs = v.size();
//    int vss = v1.size();
//    int ans = 0;
//    for(int i = 0 ;i<vs;i++){
//        for(int j = 0 ;j<vss;j++){
//            if(v1[j].first<=v[i].first&&v1[j].second>=v[i].second){
//                for(int m = v[i].first;m<=v[i].second;m++){
//                    ans++;
//                }
//
//            }
//        }
//    }
//
    printf("%d",ans);
    return 0;
}
