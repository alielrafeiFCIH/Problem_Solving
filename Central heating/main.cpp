#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
//    int l,h,w,k;
//    long long  ans;
//    scanf("%d%d%d%d",&h,&w,&l,&k);
//    long long int area=(long long int)h*l*w;
//    ans=ceil((double)area/k);
//    printf("%lld",ans);
string s1,s2,s3,s4;
cin>>s1>>s2;
int Size=s1.length();
int Size2=s2.length();
double x,y,cont=0,flag=0,ans1=0,ans2=0;
for(int i=0;i<Size;i++){
    if(s1[i]=='^'){
        cont=i;
    }
}
s3=s1.substr(0,cont);
s4=s1.substr(cont+1,Size-1);
stringstream str,str2;
str<<s3;
str>>x;
str2<<s4;
str2>>y;
ans1=pow(x,y);
//============================================================================================
for(int i=0;i<Size;i++){
    if(s2[i]=='^'){
        cont=i;
    }
}
s3.clear();
s4.clear();
s3=s2.substr(0,cont);
s4=s2.substr(cont+1,Size2-1);
stringstream str1,str3;
str1<<s3;
str1>>x;
str3<<s4;
str3>>y;
ans2=pow(x,y);
if(ans1>ans2){
    cout<<s1;
}else{
    cout<<s2;
}

    return 0;
}
