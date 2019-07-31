#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c;
    int a[26]={0};
    scanf("%d",&n);
    for(int i = 0 ;i < n ;i++){
        scanf(" %c",&c);
        if(c<='Z'&& c>='A'){
            c = c + 32;
        }
        int x = c - 'a';
        a[x]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]<1){
            printf("NO");
            return 0 ;
        }
    }
    printf("YES");
    return 0;
}
