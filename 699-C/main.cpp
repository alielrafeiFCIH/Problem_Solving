#include <bits/stdc++.h>

using namespace std;

int main()
{

    int count_vacations  = 0;
    int n,mark;
    int pday;
    scanf("%d",&n);
    scanf("%d",&mark);
    if(mark==0)count_vacations++,pday=mark;
    else pday=mark;

    for(int i =1;i<n;i++){
        scanf("%d",&mark);
        if(mark==0)count_vacations++,pday=mark;
        else if(mark==1){if(pday==1)count_vacations++,pday = 0;else pday=mark;}
        else if(mark==2){if(pday==2)count_vacations++,pday = 0;else pday=mark;}
        else if(mark==3){if(pday==1)pday=2;else if(pday==2) pday=1;else pday=3;}
    }
    printf("%d",count_vacations);
    return 0;
}
