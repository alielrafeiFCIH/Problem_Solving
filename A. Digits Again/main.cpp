#include <bits/stdc++.h>

using namespace std;
int check (string c){
   long long int sumc=0;
    long long int cc = c.length();
    for(long long int i = 0;i<cc;i++){
        sumc+=c[i]-'0';
    }

 return sumc;

}
int main()
{
    int n ;
    cin>>n;
    string a,b,c;
    int mn =10000000;
    for(int i =0;i<n;i++){
        cin>>a>>b>>c;
        int a1,b1;
        stringstream x(a);
        x>>a1;
         stringstream x1(b);
        x1>>b1;
        int c1 = check(c);
        int ans = 10000000;
        for( int j = a1;j<=b1;j++){
         string ss;
         stringstream x;
        x<<j;
        x>>ss;

         int s1 = check(ss);
            if(abs(s1-c1)<abs(mn-c1)){
                mn = s1;
                ans =j;
            }

        }
        cout<<ans<<endl;
         mn =10000000;
    }
    return 0;
}
