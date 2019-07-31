#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l,r,a,b,c;
    cin>>l>>r;
    if(r-l+1<3){
        printf("-1");
        return 0;
    }
    if(l%2==0){
        cout<<l<<" "<<l+1<<" "<<l+2;
    }else if(r-l+1>3){
            cout<<l+1<<" "<<l+2<<" "<<l+3;

    }else{
            printf("-1");
    }






    return 0;
}
