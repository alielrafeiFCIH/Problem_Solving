#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int diff(string s){
    int x;
    int sum=0,mult=1;
    int ans;
    if(s[0]=='-'){
      stringstream str;
       str<<s[1];
        str>>x;
        sum+=x;
        mult*=x;
      stringstream str1;
      str1<<s[2];
      str1>>x;
      sum+=x;
      mult*=x;
       stringstream str2;
       str2<<s[3];
      str2>>x;
      sum+=x;
      mult*=x;

    }else{
      stringstream str;
       str<<s[0];
        str>>x;
        sum+=x;
        mult*=x;
      stringstream str1;
      str1<<s[1];
      str1>>x;
      sum+=x;
      mult*=x;
       stringstream str2;
       str2<<s[2];
      str2>>x;
      sum+=x;
      mult*=x;
    }
    ans=mult-sum;
return ans;
}
int main()
{
    string number;
    cin>>number;
    printf("%d",diff(number));
    return 0;
}
