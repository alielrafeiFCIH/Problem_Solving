#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
            int a1=a;
            int b1=b;
            int x,y;
            x=max(a,b);
            y=min(a,b);
        int mxcycle=0;
            while(y<=x){
                int n=y;
                int cycle=1;
            while(n!=1){
                if(n%2==0){
                    n=n/2;
                }else{
                n=(3*n)+1;
                }
                ++cycle;
            }
                if(cycle>mxcycle){
                    mxcycle=cycle;
                }
                ++y;

            }

cout<<a1<<" "<<b1<<" "<<mxcycle<<endl;
    }

    return 0;
}
