#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c;
    while(cin>>n>>m>>c&&n!=0){
        int x = (m-7);
        int y = (n-7);
        int d = x*y;
        if(c==1){
            if(d%2==0){
                cout<<d/2<<endl;
            }else{
                cout<<(d+1)/2<<endl;
            }
        }else{

            cout<<d/2<<endl;
        }
    }
    return 0;
}
