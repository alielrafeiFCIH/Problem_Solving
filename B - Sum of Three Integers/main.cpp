#include <bits/stdc++.h>

using namespace std;

int main()
{   int k ,s;
    scanf("%d%d",&k,&s);

        long long ans=0;
        for(int x=0;x<k+1;x++){
            for(int y=0;y<k+1;y++){
                    int z = s-x-y;
                    if(z>=0 && z<=k)
                        ans++;

            }
        }
        printf("%I64d\n",ans);

    return 0;
}
