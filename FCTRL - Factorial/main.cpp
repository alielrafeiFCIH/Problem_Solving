#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x;
    cin>>n;
    while(n!=0){
        cin>>x;
        int sum=0,i=1;
        while(x>=5){
            sum=sum+x/5;
            x/=5;
        }
        cout<<sum<<endl;
        --n;
    }

    return 0;
}
