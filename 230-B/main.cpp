#include <bits/stdc++.h>

using namespace std;
const int m = 1e6+5;
bool primes[m];
int prime[m];

void seive(){

    for(int p=2;p<=1000000;p++)primes[p]=true;
    for (long long int p=2; p*p<=1000000; p++){

        if (primes[p] == true){

            for (long long int i=p*2; i<=1000000; i += p)
                primes[i] = false;
        }
    }




}

int main()
{
    seive();
    for(int p=2;p<=1000000;p++)prime[p]=-1;
    for(int p=2;p<=1000000;p++){
        if(primes[p]){
            prime[p]=1;
        }
    }
int n;
cin>>n;
long long sq ,x;
for(int i = 0;i<n;i++){
    cin>>x;
    sq = sqrt(x);
    printf("%f\n",sqrt(x));
    if(sq*sq!=x){
        cout<<"NO"<<endl;
        continue;
    }
    if(sq!=2){
        if(sq%2==0 || sq ==1){
            cout<<"NO"<<endl;
        }
        if(prime[sq]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}
