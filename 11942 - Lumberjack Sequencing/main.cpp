#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,a,b;
    cin>>k;
    cout<<"Lumberjacks:"<<endl;
    while(k--){
            int x=0,y=0;
            cin>>b;
        for(int i=0;i<9;i++){
            cin>>a;
            if(a<b){
                x=1;
            }else{
                y=1;
            }
            b=a;

        }
        if(y&&x){
            cout<<"Unordered"<<endl;
        }else{
            cout<<"Ordered"<<endl;
        }
    }
    return 0;
}
