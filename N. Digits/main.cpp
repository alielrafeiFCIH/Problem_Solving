#include <bits/stdc++.h>
int main(){
    double n;
    scanf("%lf",&n);
    int sq = (int)sqrt(n);
    for(long long  i =2;i<=sq;i++){
        if((long long )n%i==0){printf("NO");return 0;}
    }
    printf("YES");

return 0 ;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        int number;
//        scanf("%d",&number);
//        int temp=number,digits=0;
//        while(temp!=0){
//            digits++;
//            temp/=10;
//        }
//        while(digits--){
//            int temp1=pow(10,digits);
//            temp=number%temp1;
//            printf("%d",(int)(number/pow(10,digits)));
//            if(digits>0)printf(" ");
//            number=temp;
//
//
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        int number ;
//    scanf("%d",&number);
//    int reminder = 0;
//    int number2 =0;
//    int count_zeros=0;
//    int flag = 1;
//
//    reminder = number%10;
//    if(!reminder)count_zeros++;
//    else flag =0;
//    number2 += reminder;
//    number/=10;
//
//
//    while(number!=0){
//
//        reminder = number%10;
//        if(!reminder&&flag)count_zeros++;
//        else flag=0;
//        number2 = number2*10+reminder;
//        number/=10;
//    }
//    while(number2!=0){
//        reminder = number2%10;
//        printf("%d",reminder);
//        number2=number2/10;
//        if(number2!=0)
//        printf(" ");
//    }
//    if(count_zeros){
//            int j =0;
//            printf(" ");
//            while(j<count_zeros){
//                printf("0");
//                j++;
//                if(j<count_zeros)
//                printf(" ");
//
//            }
//    }
//    printf("\n");
//    }
//
//    return 0;
//}
