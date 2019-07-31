#include <bits/stdc++.h>
//
//
//waggia
//
//
//

using namespace std;


int main()
{
    int a[5];
    int n,x;
    int Size=0;
    int number_of_four=0;
    cin>>n;
    Size=n;
    for(int i=0;i<5;i++)a[i]=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x==1){
                ++a[1];
        }else if(x==2){
                ++a[2];
        }else if(x==3){
        ++a[3];
        }else if(x==4){
        ++number_of_four;
        }
    }
    while(Size){
            if(a[3]!=0){
             if(a[1]!=0){
                --a[1];
                --a[3];
                ++number_of_four;
                --Size;
             }else{
                 --a[3];
             ++number_of_four;
             --Size;
             }

            }else if(a[2]!=0&&a[3]==0&&a[1]!=0){
                if(a[1]>=2){
                a[1]-=2;
                --a[2];
                ++number_of_four;
                --Size;
                }else{
                 --a[1];
                --a[2];
                ++number_of_four;
                --Size;
                }

            }else if(a[2]!=0&&a[3]==0&&a[1]==0){
                if(a[2]>=2){
                    a[2]-=2;
                    ++number_of_four;
                }else{
                    --a[2];
                ++number_of_four;
                --Size;
                }
            }else if(a[2]==0&&a[3]==0&&a[1]!=0){
                if(a[1]>=4){
                    a[1]-=4;
                    ++number_of_four;
                    --Size;
                }else {
                    a[1]-=a[1];
                ++number_of_four;
                --Size;
                }

            }
            if(a[1]==0&&a[2]==0&&a[3]==0)break;

    }
      cout<<number_of_four<<endl;

    return 0;
}
