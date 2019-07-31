#include <bits/stdc++.h>

using namespace std;
bool prime(long long num){
    for(int i =2;i*i<=num;i++)
        if(num%i==0)return 0;

    return 1;
}

int main()
{
   long long  n;
   cin>>n;
   if(prime(n))printf("1");
   else{
        if(n%2==0|| prime(n-2))printf("2");
        else printf("3");

   }

    return 0;
}
