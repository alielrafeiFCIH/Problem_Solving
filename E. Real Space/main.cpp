#include <bits/stdc++.h>

using namespace std;

int main()
{
//  freopen("memory.in" , "r" , stdin);
        int n;
        scanf("%d",&n);
        int x;

        for(int i =0;i<n;i++){
        scanf("%d",&x);

        int mb = (x*1000*1000)/1024;
        int by = (x*1000*1000)-(mb*1024);
        int temp = (x*1000*1000)-by;
        int g = temp/(1024*1024);
        int mbb = temp - (g*1024*1024);
        cout<<g<<" GB, "<<mbb/1024<<" MB and "<<by<<" Bytes"<<endl;
        }
    return 0;
}
