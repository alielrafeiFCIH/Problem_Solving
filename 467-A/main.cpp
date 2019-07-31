#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,x,y,sum=0,cont=0;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>x>>y;
    if(abs(x-y)>=2){
        ++cont;
    }

   }
   cout<<cont<<endl;
    return 0;
}
