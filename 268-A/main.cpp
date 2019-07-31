#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    int a[30][2];
    for(int i=0 ; i<n ; ++i)
        cin>>a[i][0]>>a[i][1];
    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<n ; ++j){
            if(a[i][0]==a[j][1])++counter;
        }
    }
    cout<<counter<<endl;
    return 0;
}
