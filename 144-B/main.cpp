#include <bits/stdc++.h>

using namespace std;
vector<pair<pair<int,int>,int> >v(1001);
map<pair<int,int>,int>s;

pair<int,int>p;
int num_heat =0;
int num=0;
int cal_distance(int x1,int y1,int x2,int y2){
    return ceil(sqrt((int)(pow((x1-x2),2)+0.5)+(int)(pow((y1-y2),2)+0.5)));
}

void count_generals(int x1,int y1,int x2,int y2,int index){
    int mx = max(x1,x2);
    int mnx = min(x1,x2);
    int mxy = max(y1,y2);
    int mny = min(y1,y2);
    int c=0;
    for(int i =mx,j=mnx;i>=mnx,j<=mx;i--,j++){
         if(cal_distance(i,mxy,v[index].first.first,v[index].first.second)>v[index].second){
            p=make_pair(i,mxy);
            if(s[p]!=1&&s[p]!=-1){
                s[p]=-1;

            }
         }else{
            p=make_pair(i,mxy);
            s[p]=1;

         }

        if(cal_distance(j,mny,v[index].first.first,v[index].first.second)>v[index].second){
            p=make_pair(j,mny);
            if(s[p]!=1&&s[p]!=-1){
                s[p]=-1;

            }
         }else{
            p=make_pair(j,mny);
            s[p]=1;

         }

    }
    for(int i =mxy,j=mny;i>=mny,j<=mxy;i--,j++){
         if(cal_distance(mx,i,v[index].first.first,v[index].first.second)>v[index].second){
            p=make_pair(mx,i);
            if(s[p]!=1&&s[p]!=-1){
                s[p]=-1;
            }
         }else{
            p=make_pair(mx,i);
            s[p]=1;

         }

        if(cal_distance(mnx,j,v[index].first.first,v[index].first.second)>v[index].second){
            p=make_pair(mnx,j);
            if(s[p]!=1&&s[p]!=-1){
                s[p]=-1;

            }
         }else{
            p=make_pair(mnx,j);
            s[p]=1;

         }

    }


}

int main()
{
    int x1,x2,y1,y2;
    int n;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        v[i]=make_pair(make_pair(0,0),0);
        scanf("%d%d%d",&v[i].first.first,&v[i].first.second,&v[i].second);
    }
    bool flag = false;
    for(int i=0;i<n;i++){
            count_generals(x1,y1,x2,y2,i);
    }
    for(pair<pair<int,int >,int> x:s){
        if(x.second==-1){num++;

        }
    }
    printf("%d",num);
    return 0;
}
