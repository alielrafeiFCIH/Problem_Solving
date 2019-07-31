#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    int q;
    scanf("%d",&q);
    while(q--){

    cin>>a>>b>>c;
    long long ans = a+b+c;
//    cout<<ans<<endl;
    if(ans%2==0){
        ans/=2;
        cout<<ans<<endl;


    }else{
        long long temp = ans%2;
        ans = ans -temp;
        ans/=2;
        cout<<ans<<endl;
    }
    }

    return 0;
}
