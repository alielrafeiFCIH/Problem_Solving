#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   scanf("%d",&n);
   string s;
   int ans = 0;
   while(n--){
        cin>>s;
    if(s=="Tetrahedron"){
        ans+=4;
    }else if(s=="Cube"){
        ans+=6;
    }else if(s=="Octahedron"){
    ans+=8;
    }else if(s=="Dodecahedron"){
    ans+=12;
    }else if(s=="Icosahedron"){
    ans+=20;
    }
   }
    printf("%d",ans);
    return 0;
}
