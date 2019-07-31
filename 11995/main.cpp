#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0,y=0,s1=0,q1=0,pq1=0;

        int n;
        while(cin>>n){
    stack<int>s;
    queue<int>q;
    priority_queue<int>pq;
    bool stk=true, que=true,porq=true;
            for(int i=0;i<n;i++){
                      cin>>x>>y;
                      if(x==1){
                        s.push(y);
                        q.push(y);
                        pq.push(y);
                    }else {
                            if(s.empty()||s.top()!=y){
                                stk=false;
                            } if(q.empty()||q.front()!=y){
                                que=false;
                            }if(pq.empty()||pq.top()!=y){
                                porq=false;
                            }
                        if(!s.empty()){
                            s.pop();
                        }
                        if(!q.empty()){
                            q.pop();
                        }
                        if(!pq.empty()){
                            pq.pop();
                        }


                      }

            }

              int sum= stk+que+porq;
                if(sum>1)cout<< "not sure "<<endl;
                else if(sum==0)cout<< "impossible" <<endl;
                else if(stk)cout<< "stack"<<endl;
                else if(que)cout<< "queue" <<endl;
                else cout<< "priority queue" <<endl;
        }
            return 0;
}
