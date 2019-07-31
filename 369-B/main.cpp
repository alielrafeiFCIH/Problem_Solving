#include <bits/stdc++.h>
 using namespace std;
int a[1005];
 int main(void){
    int n,k,l,r,s_all,s_k;
    scanf("%d%d%d%d%d%d",&n,&k,&l,&r,&s_all,&s_k);
    int diff_k_s = s_all-s_k;
    int diff_n_k = (n-k);
    int i;
    int temp =0;int temp2 =0;
    for(i=k;i<n;i++){
        a[i]+=(diff_k_s/diff_n_k);
        temp+=a[i];
        }
    for(int j=0;j<k;j++){
        a[j]+=s_k/k;
        temp2+=a[j];
    }
    i=0;
    while(temp2<s_k){
        a[i++]++;temp2++;
    }
    i=k;
    while(temp<diff_k_s){
        a[i++]++;temp++;
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
 }
