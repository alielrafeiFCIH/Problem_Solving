#include <bits/stdc++.h>

using namespace std;

long long sum(long long mid ,long long k){
    if(mid<=1)return k*(k+1)/2;

    long long x = k*(k+1)/2;
    long long y =  mid*(mid-1)/2;

    return x-y;
}
long long  bs_first(long long k,long long n){
    long long start = 1,end = k;
    while(start<end){
        long long mid = start + (end-start)/2;
        long long s = sum(mid,k);
        if(s == n){
            return k-mid+1;
        }

        if(s>n){
            start = mid +1;

        }else{
            end = mid;
        }
    }
    return k-start+2;
}
int main()
{
    long long n,k;
    cin>>n>>k;
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }else if(n<=k){
        printf("1");
        return 0;
    }else{
     long long sum = (k*(k+1))/2 ;
    long long count = sum-(k-2+1);
    if(count>=n){
            cout<<bs_first(k-1,n-1);
             return 0;

    }
    }

       cout<<"-1";
    return 0;
}
