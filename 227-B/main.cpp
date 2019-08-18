#include <iostream>

using namespace std;

int main()
{
        #include <iostream>
    #include <math.h>
    #include <algorithm>
    using namespace std;

    int main()
    {
        int n;
        long long x,y;
        cin>>n>>x>>y;
        int sum = 0;
        while(n--){

            int nX= x%10;
            x/=10;
            int nY= y%10;
            y/=10;

            sum+=min(9-abs(nX-nY),abs(nX-nY));
    /*
    5
    82195
    64723
    */
            /*cout<<"nX : "<<nX<<" nY : "<<nY<<"\n";
            cout<<" A : "<<a <<"  B : "<<b<<"\n";*/

        }
        cout<<sum;

    }
    return 0;
}
