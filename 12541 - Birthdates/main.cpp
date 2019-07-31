#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t!=0){
        char c;
        int x,flag=0;
        cin>>x;

        while( cin>>c){

                if(c=='=')break;
                int n;
                cin>>n;
                if(c=='+'){
                    x+=n;
                  }else if(c=='-'){
                  x-=n;
                  }else if(c=='*'){
                  x*=n;
                  }else if(c=='/'){
                  x/=n;
                  }else if(c=='%'){
                  x%=n;
                  }

    }
    cout<<x<<endl;
cout<<"\n";
        --t;
    }

    return 0;
}
