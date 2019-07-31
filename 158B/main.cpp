#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no;
    string name[]={"ali","ahmed","omar","mohamed"};
    string names;
map <string,int> mymap;
map <string,int> ::iterator it;
for(int i=0;i<4;i++){
        no=i;
        names=name[i];
    mymap[names]=no;
}
for(it=mymap.begin();it!=mymap.end();it++)cout<<(*it).first<<"    "<<(*it).second<<endl;
    return 0;
}
