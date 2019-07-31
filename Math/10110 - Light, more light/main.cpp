#include <bits/stdc++.h>

using namespace std;

int main()
{
   unsigned int n;

    scanf("%d",&n);
    while(n){
        int count = 0;
        int i = 0;
        unsigned sq  = (int) sqrt(n);
        if(sq*sq==n){
                printf("yes\n");
        }else{
                printf("no\n");
        }
     scanf("%d",&n);
    }
    return 0;
}
