#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    char input[3];
    char ans;
    int num;
    int start=-1e9-1,end=1e9+1;
    for(int i=0;i<n;i++){
                scanf("%s %d %c",&input,&num,&ans);
            if(input[0]=='>'&&input[1]=='='){
                if(ans=='Y'){
                        start=max(start,num);
                }else{
                    end = min(end,num-1);
                }

            }else if(input[0]=='>'&&input[1]!='='){
                if(ans=='Y'){
                    start = max(start,num+1);
                }else{
                    end = min(end,num);
                }
            }else if(input[0]=='<'&&input[1]=='='){
                if(ans=='Y'){
                    end = min(end,num);
                }else{
                    start = max(start,num+1);
                }
            }else if(input[0]=='<'&&input[1]!='='){
                 if(ans=='Y'){
                        end = min(end,num-1);
                }else {
                    start=max(start,num);
                }
            }

    }
    if(start>end){
        printf("Impossible");
    }else {
        cout<<(start+end)/2;
    }
    return 0;
}
