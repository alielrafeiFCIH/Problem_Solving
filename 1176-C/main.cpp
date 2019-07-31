#include <bits/stdc++.h>

using namespace std;
int good_array[500005];

queue<int>q4;
queue<int>q8;
queue<int>q15;
queue<int>q16;
queue<int>q23;
queue<int>q42;

int main()
{
    int n ;
    scanf("%d",&n);
    if(!n){
        printf("0");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&good_array[i]);
        if(good_array[i]==4)q4.push(i);
        if(good_array[i]==8)q8.push(i);
        if(good_array[i]==15)q15.push(i);
        if(good_array[i]==16)q16.push(i);
        if(good_array[i]==23)q23.push(i);
        if(good_array[i]==42)q42.push(i);
    }
    int counter = 0;
    while(!q4.empty()&&!q8.empty()&&!q15.empty()&&!q16.empty()&&!q23.empty()&&!q42.empty()){
        if(q4.front()<q8.front()){
            if(q8.front()<q15.front()){
                if(q8.front()<q15.front()){
                    if(q15.front()<q16.front()){
                        if(q16.front()<q23.front()){
                            if(q23.front()<q42.front()){
                                counter+=6;
                                q4.pop();
                                q8.pop();
                                q15.pop();
                                q16.pop();
                                q23.pop();
                                q42.pop();

                            }else{
                                q42.pop();
                            }
                        }else{
                            q23.pop();
                        }
                    }else{
                        q16.pop();
                    }
                }else{
                    q15.pop();
                }
            }else{
                 q15.pop();
            }
        }else{
          q8.pop();
        }


    }
    printf("%d",n-counter);

    return 0;
}
