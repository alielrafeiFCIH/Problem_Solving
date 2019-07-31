#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[]={'a','b','c','d'};
    for(int i=0;i<(1<<4);i++){
        for(int j=0;j<4;j++){
            if((i>>j)&1){
                cout<<a[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
