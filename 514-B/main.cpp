#include <bits/stdc++.h>

using namespace std;
map<pair<double,double>,int>mp;
pair<double,double>p;
double cal_slope(int x1,int y1,int x2,int y2){


    return (double)(y2-y1)/(double)(x2-x1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,x1,y1;
    scanf("%d%d",&x,&y);
    double slope=0.0;
    int count=0;
    double b = 0.0;
    bool flag1=true,flag2=true,flag3=true;
    for(int i=0;i<n;i++){
        scanf("%d%d",&x1,&y1);

        if(x==x1&&flag1){
            count++;
            flag1=false;
        }else if(y==y1&&flag2){

            count++;
            flag2=false;
        }else if(x1==x&&y==y1&&flag3){
            count++;
            flag3=false;
        }else if(x==x1&&!flag1){
            continue;
        }else if(y==y1&&!flag2){
            continue;
        }else if(x1==x&&y==y1&&!flag3){
            continue;
        }else{
        slope=cal_slope(x,y,x1,y1);
        b=(double)y-slope*(double)x;

        p = make_pair(slope,b);
        if(!mp[p])count++,mp[p]++;
        }


    }
    printf("%d",count);
    return 0;
}
