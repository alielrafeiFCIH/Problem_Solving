#include <bits/stdc++.h>

using namespace std;

int main()
{//!" << endl;
   int x,y;
   cin>>x>>y;
   if(x!=y){
       int sum = min(x,y)%max(x,y);
   int sum1 = (max(x,y)-sum);
   cout<<sum<<" "<<sum1/2;
   }else{
    cout<<x<<" "<<"0";
   }



    return 0;
}
