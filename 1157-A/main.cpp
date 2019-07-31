#include <bits/stdc++.h>

using namespace std;
int arr[10];
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=1;i<=9;i++){
        cin>>arr[i];

    }

    for(int i=0;i<s.length();i++){
        int num = s[i]-'0';
        if(num<arr[num]){
            s[i] = arr[num]+'0';

        }
    }
    cout<<s;
//    long long count=1;
//    if(n==0){
//    cout<<"0";
//    return 0;
//    }
//    while(1){
//        n= n+1;
//        while(n%10==0){
//            n=n/10;
//        }
//        if(arr[n]==1){
//            break;
//        }else{
//            arr[n]=1;
//            count++;
//        }
//    }

    return 0;
}
