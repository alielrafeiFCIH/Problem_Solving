#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack <int> s;
    int n;
    int x,no;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d",&no);
     if(no==1){
        scanf("%d",&x);
        s.push(x);
     }else{
     printf("%d\n",s.top());
     s.pop();
     }
    }
    return 0;
}
