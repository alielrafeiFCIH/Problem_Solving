#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,t;
string s;
scanf("%d%d",&n,&t);
cin>>s;
while(t!=0){
        int x=0;
for(int i=0;i<n;++i){
    if(s[i]=='B'&&s[i+1]=='G'){
        char temp;
        temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
        i+=1;
    }
}
--t;
}
cout<<s<<endl;
    return 0;
}
