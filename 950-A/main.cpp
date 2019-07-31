#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,a;
    int team = 0;
    scanf("%d%d%d",&l,&r,&a);
    if(r<l){
        while(r<l&&a!=0){
            r++;
            a--;
        }
        if(r<l){
            cout<<r+r;
            return 0;
        }else{
            if(a){
                int mod = a%2;
                if(mod!=0){
                 a-=mod;
                 cout<<r+r+a;
                }else cout<<r+r+a;
            }else{
                cout<<l+r;
            }
        }

    }else if(r>l){
        while(l<r&&a!=0){
            l++;
            a--;
        }
        if(l<r){
            cout<<l+l;
            return 0;
        }else{
            if(a){
                int mod = a%2;
                if(mod!=0){
                 a-=mod;
                 cout<<l+l+a;
                }else cout<<l+l+a;
            }else{
                cout<<l+r;
            }
        }

    }else{
        int mod = a%2;
        if(mod!=0){a-=mod; cout<<l+r+a;}
        else cout<<r+l+a;
    }
    return 0;
}
