#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[1000];
    int b[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        b[i]=a[i]+b[i-1];
    }
    int q,a1,a2;
    cin>>q;
    while(q!=0){
        cin>>a1>>a2;
        cout<<b[a2]-b[a1-1]<<endl;
        --q;
    }
    return 0;
}
