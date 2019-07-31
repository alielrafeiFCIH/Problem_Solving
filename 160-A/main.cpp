#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,sum1=0;
int a[100];
cin>>n;
for(int i=0;i<n;i++){cin>>a[i];
sum1+=a[i];

}
sort(a,a+n);
reverse(a,a+n);
int sum=0,cont=0;
for(int i=0;i<n;i++){
    sum+=a[i];
    ++cont;
    sum1=sum1-a[i];
    if(sum>sum1)break;

}
cout<<cont<<endl;
    return 0;
}
