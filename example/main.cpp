#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
      int  a[20];
       int  b[20];
        vector<int>s;
    cin>>x>>n;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
    int bestval=0,bestmask=0;
    for(int i=0;i<(1<<n);i++){
            int sumw=0; int sumv=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sumw+=a[i];
                    sumv+=b[i];
                }
            }

    }
    return 0;
}
