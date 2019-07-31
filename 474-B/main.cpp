#include <bits/stdc++.h>

using namespace std;
long long int a[100000];
long long int worms[1000000];
int main()
{
    long long int n,x,cont=1,t;
    scanf("%I64d",&n);
    for(int i=0;i<n;i++){
       scanf("%I64d",&a[i]);
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<a[i-1];j++){
        worms[cont]=i;
        ++cont;
        }
    }
    scanf("%I64d",&t);
    while(t--){
   scanf("%I64d",&x);
    cout<<worms[x]<<endl;

    }
    return 0;
}
