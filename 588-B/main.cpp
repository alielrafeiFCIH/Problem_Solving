    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    vector<ll>v;

    int main()
    {
        ll n;
        cin>>n;
        ll i;
        for(i = 1;i*i<n;i++){
            if(n%i==0)
            v.push_back(i),v.push_back(n/i);
        }
        if(i*i%n==0){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        for(int j=v.size()-1;j>=0;j--){
            bool flag = true;
            for(int k =1;k<v.size();k++){
                ll temp = sqrt(v[k]);
                if(v[j]%v[k]==0)
                if(temp*temp==v[k]){
                    flag = false ;
                    break;
                }
            }
            if(flag){
                printf("%I64d",v[j]);
                break;
            }
        }
        return 0;
    }
