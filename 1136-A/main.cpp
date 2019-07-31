#include <bits/stdc++.h>

using namespace std;
int en[1001];
int main()
{
int n,k;
scanf("%d%d",&n,&k);

int answer=0;
int number_of_coins=n;

if(abs(k-1)<abs(n-k)){

answer+=(n*2)+1;
answer+=(n-1);
answer+=abs(k-1);
}else if(abs(k-1)>abs(n-k)){

answer+=(n*2)+1;
answer+=(n-1);
answer+=abs(n-k);
}else if(abs(k-1)==abs(n-k)){

answer+=(n*2)+1;
answer+=(n-1);
answer+=abs(k-1);
}
printf("%d",answer);










//int n,k;
//scanf("%d",&n);
//int start ;
//for(int i=0;i<n;i++){
//    scanf("%d%d",&start,&en[i]);
//}
//scanf("%d",&k);
//int counter = 0;
//for(int i=0;i<n;i++){
//    if(k>en[i])counter++;
//}
//printf("%d",n-counter);
    return 0;
}
