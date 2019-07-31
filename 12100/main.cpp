#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int size ,index;
        scanf("%d%d",&size,&index);
        queue<int>q;
        int prior[10];
        memset(prior,0,sizeof(prior));
        int my_job,job;
        for(int i=0;i<size;i++){
            scanf("%d",&job);
            if(i==index)my_job=job;
            prior[job]++;
            q.push(job);
        }
        int answer =0;
        bool flag =0;
        for(int i=9;i>=1;i--){
            if(prior[i]!=0){
                while(prior[i]!=0){
                    int top =q.front();
                    if((top==i&&top!=my_job)||(top==i&&top==my_job&&index!=0)){
                        q.pop();
                        answer++;
                        prior[i]--;
                        index--;
                    }
                    else if(top==i&&top==my_job&&index==0){
                        answer++;
                        printf("%d\n",answer);
                        flag =1;
                        break;
                    }else{
                        if(index==0)index=q.size()-1;
                        else{
                            index--;
                        }
                        int temp = q.front();
                        q.pop();
                        q.push(temp);
                    }
                }
                if(flag)break;
            }
        }
        while(!q.empty())q.pop();
    }
    return 0;
}
