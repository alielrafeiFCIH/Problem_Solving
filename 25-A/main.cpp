#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int number,index1=0,index2=0,cont1=0,cont2=0;
    for(int i=0;i<n;i++){
            scanf("%d",&number);
        if(number&1){
            index1=1+i;
            cont1++;
        }else{
        index2=1+i;
        cont2++;
        }
    }

        if(cont1>cont2){
        printf("%d",index2);
        }else{
        printf("%d",index1);
        }

    return 0;
}
