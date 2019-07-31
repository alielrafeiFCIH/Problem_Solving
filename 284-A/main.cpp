#include <bits/stdc++.h>

using namespace std;
//bool prime[2001];
//void Sieve()
//{
//
//    for(int i = 0 ;i<=2000;i++){
//        prime[i]=true;
//    }
//
//    for (int p=2; p*p<=2000; p++)
//    {
//        if (prime[p] == true)
//        {
//            for (int i=p*2; i<=2000; i += p)
//                prime[i] = false;
//        }
//    }
//}
int main()
{
    int p;
    scanf("%d",&p);
//    Sieve();
    int count = 0;
//    for(int i =1;i<p-1;i++){
//        if(prime[i]){
//            count++;
//        }
//    }
//    printf("%d",count);
    int ans,i,j;
    for(i = 1 ;i<p;i++){
        ans = 1;
        for(j = 1;j<p-1;j++){
            ans = (ans*i)%p;//get remainder of power
//            printf("%d\n",ans);
            if(ans == 1)break;
        }
//        printf("\n");
        if(j==p-1 && ((ans*i)%p) == 1)count++;
//        printf("%d\n",count);
    }
    printf("%d",count);
    return 0;
}
