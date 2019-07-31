#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line ;
    int x,n,value[100];
        while(getline(cin,line)){
            stringstream mycin(line);
            n =0;
            while(mycin>>x){
                value[n]=x;
                ++n;
            }
        }
        return 0;
}
