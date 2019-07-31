#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maxcost[100000];
typedef struct Weight {
    int first;
    int second;
};
int main()
{
     int n,m;
     Weight a[100000];
     int c,w,cost=0,ans=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>w>>c;
        a[i].first=w;
        a[i].second=c;
    }
  for(int i=0;i<n;i++){
    int temp=a[i].first;
        for(int j=i+1;j<n;j++){
                temp+=
            if(){
                maxcost[j-1];
            }
        }
  }
    return 0;
}
