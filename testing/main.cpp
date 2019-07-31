#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   double cont;
   scanf("%d",&n);
    cont =ceil(log(1.0*n)/log(3.0));
    printf("%.0f",cont);
    return 0;
}
