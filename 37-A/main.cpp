#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int , int>M;
    int n,x;
    long long int temp=0,mb=0,mbn=0;
    cin>>n;
    for(int i=0 ; i<n;++i){
        cin>>x;
        ++M[x];
    }
    map<int ,int>::iterator it=M.begin();
    while(it!=M.end()){
     temp=(long long )it->second;
        if(temp>mb){
            mb=temp;
            mbn=it->second;

        }
        ++it;
    }
cout<<mbn<<" "<<M.size()<<endl;
    return 0;
}
