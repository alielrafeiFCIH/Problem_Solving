#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        long long x;
        scanf("%d",&n);
        cin>>x;
        char c;
        int child = 0;
        int a;
        for(int i = 0;i<n;i++){
            cin>>c;
            scanf("%d",&a);
            if(c=='-'){
                if(x>=a){
                    x-=a;
                }else{
                    child++;
                }
            }else{
                x+=a;
            }
        }
   cout<<x<<" "<<child;
    return 0;
}
