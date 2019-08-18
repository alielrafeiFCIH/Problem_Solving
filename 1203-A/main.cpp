#include <bits/stdc++.h>

using namespace std;
int arr_rev[210];
int arr[210];
int main()
{
    int q,n;
    scanf("%d",&q);
    int j = 210;
    for(int i=0;i<210;i++){
        arr[i]=i+1;
    }

    while(q--){
        scanf("%d",&n);
        int a[210];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int temp = n;
        for(int i=0;i<n;i++){
            arr_rev[i]=temp--;
        }
        bool flag = true;
        bool flag_1 =true;
        for(int i =0;i<n;i++){
            flag = true;
            for(int j =0;j<n;j++){
                if(a[j]!=arr[(j+i)%n]){
                    flag= false;
                    break;
                }

            }
            if(flag)break;

        }
        for(int i =0;i<n;i++){
                 flag_1= true;
            for(int j =0;j<n;j++){
                if(a[j]!=arr_rev[(j+i)%n]){
                    flag_1= false;
                    break;
                }
            }
            if(flag_1)break;

        }
        if(flag||flag_1)
        printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
