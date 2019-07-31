#include <bits/stdc++.h>

using namespace std;
const int c = 1e6+5;
bool primes[c];
int prime[c];

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
int n;
cin>>n;
long long sq ,numb;
for(int i = 0;i<n;i++){
    cin>>numb;
    sq = sqrt(numb);
//    printf("%f",sqrt(numb));
    if(sq*sq!=numb){
        cout<<"NO"<<endl;
    }else{

      if(primes[sq]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


}
    return 0;
}
//976197352729
//999966000289
//999993399999
