#include <bits/stdc++.h>

using namespace std;
vector<pair<double,int> >v(1001);
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    int n,t1,t2,k;
    scanf("%d%d%d%d",&n,&t1,&t2,&k);
    int a,b;
    double ans1 = 0;
    double ans2 = 0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        ans1 = (a*t1)-(double(k*a*t1)/100.0)+(b*t2);
        ans2 = (b*t1)-(double(k*b*t1)/100.0)+(a*t2);
        v[i]=make_pair(-1*max(ans1,ans2),i+1);
    }
    sort(v.begin(),v.end());
    for(int i =0;i<n;i++)
        printf("%d %.2lf\n",v[i].second,-1*v[i].first);
    return 0;
}
