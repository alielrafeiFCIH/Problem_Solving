#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string name ;
    int score_before=0,score_after=0;
    int counter = 0;
    for(int i=0;i<n;i++){
        cin>>name;
        scanf("%d%d",&score_before,&score_after);
        if(score_before<score_after && score_before>=2400)counter++;
    }
    counter?printf("YES"):printf("NO");
    return 0;
}
