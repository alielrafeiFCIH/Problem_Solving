#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    scanf("%d%d",&n,&l);
    int a[10000];
    for(int i = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    double temp=0;
    double temp1 =0,temp2=0;
    double d = 0;
    sort(a,a+n);
    temp2 = abs(a[0]-0);
    for(int i  = 0 ;i<n-1;i++){

            if(a[i]==0&&a[i+1]==n){
                d=(double)(a[i+1]-a[i])/2.0;
                temp = (double)(a[i+1]-a[i])/2.0;
            }else if(a[i+1]==n){
//                    d=(double)(a[i+1]-a[i]);
//                    temp1=(double)(a[i+1]-a[i]);
                    temp=(double)(a[i+1]-a[i]);
            }else{
                if(temp==0){
                    temp = double(a[i+1]-a[i])/2.0;
                }else{
                    if((double)((a[i+1]-a[i])/2.0)>temp){
                        temp=double(a[i+1]-a[i])/2.0;
                    }

                }

            }

    }

       temp1 = (l-a[n-1]);
//        printf("%d %f %f\n",a[n-1],temp2,temp);
    d = max (temp1,max(temp,temp2));
    printf("%f",d);

    return 0;
}
