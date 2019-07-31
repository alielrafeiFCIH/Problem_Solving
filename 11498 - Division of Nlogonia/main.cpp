#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0){
           int d1,d2,x1,x2;
            cin>>d1>>d2;
            for(int i=0;i<n;i++){
                    cin>>x1>>x2;
            if(x1==d1 ||x2==d2){
                cout<<"divisa"<<endl;

            }else if(x1>d1&&x2>d2){
            cout<<"NE"<<endl;
            }else if(x1<d1&&x2>d2){
            cout<<"NO"<<endl;
            }else if(x1>d1&&x2<d2){
            cout<<"SE"<<endl;
            }else if(x1<d1&&x2<d2){
            cout<<"SO"<<endl;
            }

    }
cin>>n;
    }
    return 0;
}
