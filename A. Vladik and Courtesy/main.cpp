#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,Valera,Vladik,i=1,f1=0,f2=1;
    cin>>a>>b;
    Vladik=a;
    Valera=b;
    while(1){
        if(i>Vladik){
            cout<<"Vladik";
            break;
        }
        Vladik-=i;
        ++i;
        if(i>Valera){
          cout<<"Valera";
            break;}
        Valera-=i;

        ++i;

    }

    return 0;
}
