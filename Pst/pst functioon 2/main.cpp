#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myvector[8]={0};
    fill(myvector,myvector+4,5);
    fill(myvector+3,myvector+6,8);
    for(int i=0;i<8;i++)cout<<myvector[i]<<" ";
    return 0;
}
