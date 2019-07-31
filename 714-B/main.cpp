#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int ans =0;
    set<int>s;
    vector<int>v(3);
    for(int i =0;i<n;i++){
        cin>>a;
        s.insert(a);
    }
    if(s.size()>3){
        cout<<"NO";

    }else if(s.size()==3){
        int i=0;
        for(set<int>::iterator it=s.begin() ;it!=s.end();++it,i++){
            v[i]=*it;
        }
        a=abs(v[0]-v[1]);
        b=abs(v[0]-v[2]);
        c=abs(v[1]-v[2]);

        if(a==b||a==c||b==c)printf("YES");
        else printf("NO");

    }else{
        cout<<"YES";
    }


    return 0;
}
