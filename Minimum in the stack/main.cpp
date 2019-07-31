#include <bits/stdc++.h>

using namespace std;


int main()
{
    stack<int> s;
    stack<int> s2;
    int n,no,x,minn;
    scanf("%d",&n);
    int flage = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&no);
        if(no==1){

            scanf("%d",&x);
            s.push(x);

            if(flage==1){

                if(s.top()<s2.top()){
                    s2.push(x);
                }
            }else{

            flage = 1;

            s2.push(x);
            }

        }else if(no==2&&!s.empty()){
            if(s.top()==s2.top()&&!s2.empty()){
               s2.pop();
            }
            s.pop();
        }else if(no==3 && !s2.empty()){

            printf("%d\n",s2.top());
        }
    }
    return 0;
}
