//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    int number;
//    scanf("%d",&n);
//    for(int i =0;i<n;i++){
//        scanf("%d",&number);
//        int count_ones = 0;
//        int count_zeros = 0;
//        while(number>0){
//                if(number%2==0){
//                    count_zeros++;
//                }else{
//                    count_ones++;
//                }
//                number/=2;
//
//        }
//
//        int answer=pow(2,(count_ones))-1;
//        printf("%d\n",answer);
//    }
//    return 0;
//}
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n,x,a=0;
    int p=1;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>x;
        for(int j=x ; j>=0 ; j--){
            if(x==0){
                break;
            }
            else if(x%2 == 1){
                a++;
            }
            x = x/2;
        }
         while(a>0){
                p*=2;
                a--;
        }
        cout<<p-1<<endl;
        a = 0;
        p=1;
    }

    return 0;
}
