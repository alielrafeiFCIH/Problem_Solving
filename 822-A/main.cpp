#include <bits/stdc++.h>

using namespace std;
//int memo=0;
//int gcd(long long a,long long b){
//    if(b==0)return a;
//    return gcd(b,a%b);
//}
int factorial(int a){
  long long int fact = a;

  for(int i =1;i<a;i++){
    fact*=i;
  //printf("%d\n",fact);
  }

  return fact;

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    long long ans = factorial(min(a,b));
    cout<<ans;
    return 0;
}
