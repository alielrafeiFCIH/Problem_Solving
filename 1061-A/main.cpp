#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum ;
    scanf("%d",&sum);
    if(sum==n){cout<<"1"<<endl; return 0;}

      if((sum/2)<=n&&((sum/2)+(sum/2)==sum)){
            cout<<"2"<<endl;
            return 0;
        }
        int d2 = sum%10;
        sum = sum -d2;
        if(d2<=n&&(sum/2)<=n){
            cout<<"3"<<endl;
        }

    return 0;
}
