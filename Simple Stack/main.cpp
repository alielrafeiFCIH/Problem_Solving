#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;
    string s1;
    cin>>s1;
    int x;
    while(s1!="exit"){
        if(s1=="push"){
          cin>>x;
            s.push(x);
            printf("ok\n");
        }else if(s1=="pop"){
            printf("%d\n",s.top());
            s.pop();
        }else if(s1=="back"){
        printf("%d\n",s.top());
        }else if(s1=="size"){
        printf("%d\n",s.size());
        }else if(s1=="clear"){
            while(!s.empty()){
                s.pop();
            }
        printf("ok\n");
        }
     cin>>s1;
    }
    printf("bye");
    return 0;
}
