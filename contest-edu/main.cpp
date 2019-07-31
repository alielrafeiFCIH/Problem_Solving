#include <bits/stdc++.h>

using namespace std;
int a[150];

int main()
{
    int n,siz=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==1&&a[i+1]==0){
            ++siz;
        }
    }
    cout<<n-siz<<endl;
    return 0;
}
