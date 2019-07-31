#include <bits/stdc++.h>

using namespace std;
int a[3][50];
int main()
{
    int n , m;
    scanf("%d%d",&n,&m);
while(n!=0){
    for(int i=0;i<m;i++){
       cout<<"#";
    }
    cout<<endl;
    --n;
    if(n==0)break;
    for(int i=0;i<m-1;i++){
        cout<<".";
    }
    cout<<"#"<<endl;
    --n;
    if(n==0)break;
     for(int i=0;i<m;i++){
       cout<<"#";
    }
    cout<<endl;
    --n;
    if(n==0)break;
    cout<<"#";
    for(int i=0;i<m-1;i++){
        cout<<".";
    }
    cout<<endl;
    --n;
    if(n==0)break;
}

    return 0;
}
