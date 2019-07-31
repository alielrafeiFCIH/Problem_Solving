#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m,a;
    vector<int>v;
    long long int sum=0;
    scanf("%d%d",&n,&m);
    for(int i = 1;i<=m;i++){
        cin>>a;
        v.push_back(a);

    }
    int start = 1;
    int s = v.size();
    for(int i =0 ;i<s;i++){
     if(v[i]<start){
        int temp = abs(v[i]-start+n);
        sum+=temp;
        start=v[i];
     }else{
         int temp = abs(v[i]-start);
         sum+=temp;
         start = v[i];
     }
    }
    cout<<sum;

    return 0;
}
