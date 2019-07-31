#include <bits/stdc++.h>

using namespace std;

int main()
{

    double r,x,y,x1,y1;
    double distance ;
    double answer ;
    cin>>r>>x>>y>>x1>>y1;
    distance = sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
    answer = ceil(distance/(r*2));
    cout<<answer;

    return 0;
}
