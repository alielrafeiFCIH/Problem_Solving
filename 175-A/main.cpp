#include <bits/stdc++.h>
//again
using namespace std;
 string s;
bool check (int sr, int ed ,long long &ans){
    if(s[sr]=='0'&& sr!=ed)return false;
    if(ed-sr>7) return false ;

    for(int i = sr;i<=ed;i++){
        ans = ans*10+s[i]-'0';
    }
    return ans<=1000000 ? true:false;

}
int main()
{

    cin>>s;
    int ss  = s.length();
    string s1,s2,s3;
    long long sum = -1 ;
    for(int i = 0 ;i<ss-2;i++){
        for(int j = i + 1 ;j<ss-1;j++){
            long long  x1=0,x2=0,x3=0;
                if(check(0,i,x1)&&check(i+1,j,x2)&&check(j+1,ss-1,x3))
            sum = max(sum,x1+x2+x3);
        }
    }
    printf("%d",sum);


    return 0;
}
