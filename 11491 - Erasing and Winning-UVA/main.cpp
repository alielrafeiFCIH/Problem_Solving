#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,range;
    scanf("%d%d",&n,&range);
    deque<char>q;
    while(n){
        int len=n-range;
        q.clear();
        getchar();
        for(int i=0;i<n;++i){
            char c=getchar();
            if(q.size()>0){
                while(range&&!q.empty()&&c>q.back()){
                    q.pop_back();
                    --range;
                }
            }
            if(q.size()!=len) q.push_back(c);
            else --range;
        }
        while(!q.empty()){
            printf("%c",q.front());
            q.pop_front();
        }
        printf("\n");
        scanf("%d%d",&n,&range);
    }
    return 0;
}
