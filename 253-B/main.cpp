#include <bits/stdc++.h>

#define lp(i,n) for(int i=0;i<n;i++)
#define lpr(i,n) for(int i =n-1;i>=0;i--)
int oo = 1e9;

using namespace std;
int a[100005];
int freq [5005];

bool valid(int x,int y){
    return y<=2*x;
}

int main()
{
//
//  freopen("input.txt", "rt", stdin);
//  freopen("output.txt", "wt", stdout);

int n;
scanf("%d",&n);
    lp(i,n){
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    sort(a,a+n);
    int size = n;
    int res = 1e9;
    for(int i=0;i<n;i++){
        if(freq[a[i]]!=0){
            int start =0;
            int end = n-1;
            int ans = 0;

             while(start <= end) {
                int mid = start + (end-start)/2;
                if(valid(a[i],a[mid]))	start = mid+1,ans=mid;
                else end = mid-1;

            }

            if(ans){
               res=min(res,size-(ans-i+1));
            }else{

                freq[i]=0;

            }

        }
    }

    printf("%d",res);
    return 0;
}
