#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,y,z;
    long long a=0,b=0,c=0;
    cin>>x;
    cin>>y;
    cin>>z;
    c = (((y)-((x)-(z)))/2);
    b= z-c;
    a= x-b;
  cout<<a<<" "<<b<<" "<<c;
    return 0;
}
