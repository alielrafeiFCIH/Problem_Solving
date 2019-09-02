#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d",&n);
    do{
        queue<int>q;
        queue<int>qq;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        for(int i=1;i<=n;i++){
            if(q.size()>=2){
                qq.push(q.front());
                q.pop();
                int temp = q.front();
                q.pop();
                q.push(temp);
            }
        }
        printf("Discarded cards:");
        while(!qq.empty()) if(qq.size()==1){printf(" %d",qq.front());qq.pop();}else{ printf(" %d,",qq.front());qq.pop();}
        printf("\n");
        printf("Remaining card: %d\n",q.front());
        q.pop();
        scanf("%d",&n);
    }while(n!=0);
    return 0;
}
