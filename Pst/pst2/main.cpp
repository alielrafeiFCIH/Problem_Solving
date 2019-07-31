#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,i,j,t,x,y=0,k=0;
 char a , b;

    cin>>t;
 for(x=1;x<=t;x++){
            cin>>a>>b>>n;
 long long int arr[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
                                    }}
                     n=n-1;
                     b=n;
                     j=n;
            for(i=0;i<=n;i++){

                for(a=0;a<=n;a++){
                    if(arr[a][i]==arr[b][j]){
                        ++k;
                    }else{

                    k=0;
                    }
                    --b;

                }
                    --j;

                    }

            if(k>0){
                printf("Test #%d: Symmetric.\n",x);
            }else{
            printf("Test #%d: Non-symmetric.\n",x);
            }
            k=0;}



    return 0;
}
