#include <bits/stdc++.h>

using namespace std;
int reversee(int x){
    int cont=0;
while(x!=0){
    cont=cont*10+x%10;
    x=x/10;
}
return cont;
}
int main()
{
    int n,a,b;
    cin>>n;
    while(n!=0){
        cin>>a>>b;
        cout<<reversee(reversee(a)+reversee(b))<<endl;
        --n;
    }
    return 0;
}
