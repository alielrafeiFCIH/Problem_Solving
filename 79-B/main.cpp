#include <bits/stdc++.h>

using namespace std;
vector< pair<int,int> >v;
int main()
{
   int n,m,k,t;
   int a[1000],b[1000];
   scanf("%d %d %d %d",&n,&m,&k,&t);
    int x ,y;
    for(int i = 0 ;i<k;i++){
        scanf("%d %d",&x,&y);
        v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());

    for(int i = 0;i<t;i++){
        scanf("%d %d",&x,&y);
        int poscell = (x*m)-(m-y);

        int count = 0 ;
        bool w = false ;
        for(int j = 0 ;j<k ;j++){
            if(v[j].first==x&&v[j].second==y){
                w = true;
                break;
            }

            if(v[j].first<x||(v[j].first==x && v[j].second<y)){
                count++;
            }
        }

            if(w){
                printf("Waste\n");
            }else{
                if((poscell-count)%3==0){
                    printf("Grapes\n");
                }else if((poscell-count)%3==1){
                    printf("Carrots\n");
                }else if((poscell-count)%3==2){
                    printf("Kiwis\n");
                }
            }
    }
    return 0;
}
