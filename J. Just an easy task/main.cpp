//#include <bits/stdc++.h>
//
//using namespace std;
//int a[3000006];
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        fre[i]+=__gcd(i,n);
//    }
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            if(i!=j)
//            a[(i*j)%n]+=2;
//            else a[(i*j)%n]+=1;
//        }
//    }
//    for(int i=0;i<n;i++){
//        printf("%d\n",a[i]);
//    }
//    return 0;
//}
    #include <bits/stdc++.h>
    using namespace std;
    #define sc(x)            scanf("%d",&x)
    #define scc(x)           scanf("%c",&x)
    #define scl(x)           scanf("%lld",&x)
    #define sz(v)	     	(v.size())
    #define mem(v, d)		memset(v, d, sizeof(v))
    #define oo				2000000100
    #define OO				4000000000000000100
    #define PI 3.14159265
    #define S second
    #define F first
    #define Ceil(x,y) ((x+y-1)/y)
    #define EPS 1e-10
    typedef unsigned int uint;
    typedef long long ll;


    int dX[] = {0,0,1,-1};
    int dY[] = {1,-1,0,0};
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int MOD = 1000000007;
    const int N = 200100;
    int frq[3001000],n;
    ll ans[3001000];
    ll tmp[3001000];
    void brute()
    {
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j)
                tmp[(i*1LL*j)%n]++;
        }
        for(int i = 0;i<n;++i){
            if(tmp[i]!=ans[i]){
                puts("WA");
                return;
        }
        }

        puts("Accepted");
    }
    int main()
    {
        //freopen("leapfrog_ch_.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        sc(n);
        for(int i = 1;i<n;++i)
            frq[__gcd(i,n)]++;

        for(int i = 1;i<n;++i)
        {
            ans[0]+=frq[i]*1LL*(i - 1);
            for(int j = i;j<n;j+=i)
                ans[j]+=i*1LL*frq[i];
        }
        ans[0]+= n+n-1;
        //brute();
        for(int i = 0;i<n;++i)
            printf("%lld\n",ans[i]);



        return 0;
    }



