#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x,y;
    int n,cont=0;
    cin>>n>>x;
    for(int i=1;i<n;i++){
        cin>>y;
        if(x==y){
            ++cont;
        }else{
        x=y;

        }

    }
    cout<<cont<<endl;

     return 0;
}
