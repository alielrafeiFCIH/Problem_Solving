#include <bits/stdc++.h>

using namespace std;
int prime_1 [3];
int prime_2 [3];
int primes [3]={2,3,5};
void prime_factors(int *a,int *b){

    for(int i=0;i<3;i++){
        while(*(a)%primes[i]==0){
                prime_1[i]++;
                *(a)/=primes[i];
        }

    }
    for(int i=0;i<3;i++){
        while(*(b)%primes[i]==0){
                prime_2[i]++;
                *(b)/=primes[i];
        }

    }

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b){printf("0");return 0;}
    prime_factors(&a,&b);
    int ans = 0,count=0;
    for(int i=0;i<3;i++){
        ans =abs(prime_1[i]-prime_2[i]);
        count+=ans;
    }
    if(a==b)printf("%d",count);
    else printf("-1");

    return 0;
}
