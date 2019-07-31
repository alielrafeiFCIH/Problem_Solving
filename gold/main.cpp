#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
   int a[3],n;
   cin>>n>>a[0]>>a[1]>>a[2];
   sort(a,a+3);
   vector<int>x;
   if(a[0]==1){
    cout<<n<<endl;
    return 0;
   }
    int y=0;

   for(int i=0;i*a[2]<=n;i++){
                            if(c!=0)break;

     for(int j=0;j*a[1]<=n;j++){
                             if(c!=0)break;

             for(int f=0;f*a[0]<=n;f++){
                if(i*a[2]+j*a[1]+f*a[0]==n){
                    //cout<<i+j+f<<endl;
                    //return 0;
                    y=i+j+f;
                        ++c;
                        break;
                  }

                }
           }
   }
c=0;
int z;
//   cout<<x.size()<<endl;
   for(int i=0;i*a[1]<=n;i++){
                            if(c!=0)break;

     for(int j=0;j*a[2]<=n;j++){
                             if(c!=0)break;

             for(int f=0;f*a[0]<=n;f++){
                if(i*a[1]+j*a[2]+f*a[0]==n){
                    //cout<<i+j+f<<endl;
                    //return 0;
                    z=i+j+f;
                        ++c;
                        break;
                  }

                }
           }
   }
   cout<<max(y,z);
    return 0;
}
