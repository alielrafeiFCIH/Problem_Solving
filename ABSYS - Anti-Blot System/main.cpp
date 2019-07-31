#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a1,a2,a3;
    cin>>n;
    cout<<"\n";
  while(n!=0){

        char b1,b2;
        cin>>a1>>b1>>a2>>b2>>a3;

            if( a1.find("machula")!=-1){
                stringstream ss,ss1,ss2;
                int x1,x2,x3;
               ss<<a2;
               ss>>x2;
               ss1<<a3;
               ss1>>x3;
               x1=x3-x2;
                cout<<x1<<" "<<b1<<" "<<x2<<" "<<b2<<" "<<x3<<endl;
            }else if(a2.find("machula")!=-1){
             stringstream ss,ss1,ss2;
                int x1,x2,x3;
               ss<<a1;
               ss>>x1;
               ss1<<a3;
               ss1>>x3;
               x2=x3-x1;
                cout<<x1<<" "<<b1<<" "<<x2<<" "<<b2<<" "<<x3<<endl;
            }else if(a3.find("machula")!=-1){

             stringstream ss,ss1,ss2;
                int x1,x2,x3;
               ss<<a1;
               ss>>x1;
               ss1<<a2;
               ss1>>x2;
               x3=x1+x2;
                cout<<x1<<" "<<b1<<" "<<x2<<" "<<b2<<" "<<x3<<endl;
            }

        --n;

    }

     return 0;
}
