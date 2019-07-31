#include <bits/stdc++.h>

using namespace std;

int main()
{   string s;
    cin>>s;
//    int cnt = 1;
    int sum = 0;
    if(s.length()==1){
        cout<<"0";
        return 0;
    }
//    for(int i = 0 ;i<s.length();i++){
//            sum+= s[i]-'0';
//    }
//    while(true){
//        if(sum/10==0)break;
//        cnt++;
//        int sum1 = sum;
//        sum = 0 ;
//        while(sum1){
//            sum+=sum1%10;
//            sum1=sum1/10;
//        }
//    }
//    cout<<cnt;
// another solution
    bool flag = true;
    int cnt =0;
    while(s.length()>1){
        for(int i = 0 ;i<s.length();i++){
            sum+= s[i]-'0';
        }
        cnt++;
        stringstream x;
        x<<sum;
        x>>s;
        sum = 0;


    }
        cout<<cnt;



    return 0;
}
