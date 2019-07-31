
bool prime[N];

void sieve(){
    fill(prime , prime+N , 1);
    prime[0]=prime[1]=false;
    for(int i=2 ; i*i<=N ; ++i){
        if(prime[i]){
            for(int j=i*2 ; j<=N ; j+=i)prime[j]=false;
        }
    }
}
