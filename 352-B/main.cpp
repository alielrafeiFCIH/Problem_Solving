#include <bits/stdc++.h>

using namespace std;

vector< pair<int,int> >v(100006);
set<int>s;
set<int>ss;
int a[100006];
int main()
{
    int n;
    int x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(a[x]){
            if(a[x]>=2){
                if(v[x].second!=abs(v[x].first-i))ss.insert(x);

            }
            v[x].second=abs(v[x].first-i);
            v[x].first=i;
            a[x]++;
        }else a[x]++,v[x].first=i,v[x].second=0;
        s.insert(x);
    }
    if(ss.size()==s.size()){
         printf("0");
         return 0;
    }
    cout<<s.size()-ss.size()<<endl;

    if(ss.size()==0){
    for(set<int>::iterator iter=s.begin();iter!=s.end();++iter){
        cout<<*iter<<" "<<v[*iter].second<<endl;
    }
    }else{
    set<int>::iterator it =ss.begin();
    for(set<int>::iterator iter=s.begin();iter!=s.end();++iter){

        if((*it)==(*iter))++it;
        else cout<<*iter<<" "<<v[*iter].second<<endl;
    }
    }

    return 0;
}
