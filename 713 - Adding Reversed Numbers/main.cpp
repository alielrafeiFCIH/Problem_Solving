#include <bits/stdc++.h>

using namespace std;
int c[205];
int size = 0 ;
void rev(string &a ){
        int s=0;
        int e=(a.length()-1);
    while(s<e){
            char temp = a[s];
            a[s]= a[e];
            a[e] = temp;
            s++;
            e--;

        }

}
void sum(string s1,string s2){

    int i ;
    int n = s1.length()-1,m=s2.length()-1;
    int n1 = s1.length();
    for( i = 0;i<n1;i++){
        int mod = 0;
        int sum = s1[n]-'0' + s2[m]-'0';
        mod = (sum+c[i])/10;
        c[i] = (sum + c[i])%10;
        if(mod){
            c[i+1] = mod;
        }
        if(n)n--;
        if(m)m--;


    }
    while(n>=0){
        c[i++]=s1[n--]-'0';
    }
    size = i;

}
int main()
{
    int n;
    string s1,s2;
    scanf("%d",&n);
    while(n--){
        cin>>s1>>s2;
        memset(c,0,sizeof(c));
        rev(s1);
        rev(s2);
        if(s1.length()>s2.length())sum(s1,s2);
        else sum(s2,s1);
        for(int i = 0;i<size;i++)
            cout<<c[i];
        printf("\n");
    }
    return 0;
}
