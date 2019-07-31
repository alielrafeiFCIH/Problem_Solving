#include <bits/stdc++.h>

using namespace std;

int main()
{
int a1[12];
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
a1[0]=a+b+c;
a1[1]=a+b*c;
a1[2]=a*b+c;
a1[3]=a*b*c;
a1[4]=a+(b+c);
a1[5]=a+(b*c);
a1[6]=a*(b+c);
a1[7]=a*(b*c);
a1[8]=(a+b)+c;
a1[9]=(a+b)*c;
a1[10]=(a+b)+c;
a1[11]=(a*b)*c;
sort(a1,a1+12);
printf("%d",a1[11]);
    return 0;
}
