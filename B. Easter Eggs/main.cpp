#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s = "GBIV";
    scanf("%d",&n);
    int cont = 0;
    cout<<"ROYGBIV";
    for(int i =0,cont = 0; i< n - 7;i++,cont++){
        if(cont!=4){
            cout<<s[cont];
        }else{
        cout<<s[0];
        cont=0;
        }
    }


    return 0;
}
