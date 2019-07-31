#include <bits/stdc++.h>

using namespace std;
int n,m,y,x;
bool valid(long long x,long long  y){
    if(x<=0||y<=0||y>m||x>n)return false;
    return true ;
}

int main()
{
    long long x1,y1;
    int k;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    scanf("%d",&k);
    long long steps = 0;
    long long total_steps=0;
    for(int i =0;i<k;i++){
        scanf("%lld%lld",&x1,&y1);
        long long xx=0,yy=0;

            long long start =0;
            long long end = 1e9+5;
            while(start <= end) {
                long long mid = start + (end-start)/2;
                if(valid(x+(mid*x1),y+(mid*y1)))	start = mid+1,steps=mid;
                else end = mid-1;

            }
            total_steps+=steps;
            x = (x1*steps)+x;
            y = (y1*steps)+y;

    }
    cout<<total_steps;
    return 0;
}
