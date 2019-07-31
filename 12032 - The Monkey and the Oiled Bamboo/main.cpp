//#include <bits/stdc++.h>
//
//using namespace std;
//
//int a[100000];
//int t,n;
//bool fun(int k){
//
//for(int i=0;i<n-1;i++){
//    if(a[i+1]-a[i]>k)return false;
//    if(a[i+1]-a[i]==k)
//        k--;
//}
//return true;
//}
//int main()
//{
//
//    scanf("%d",&t);
//    for(int i=0;i<t;i++){
//        scanf("%d",&n);
//        for(int j=0;j<n;j++){
//            scanf("%d",a[i]);
//        }
//        int s=0 ,e = 1e8;
//            while(s<e){
//                int mid= s+(e-s)/2;
//                if(fun(mid)){
//                e=mid;
//                }else{
//                s=mid-1;
//                }
//            }
//        printf("%d",&s);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
#include <bits/stdc++.h>
using namespace std;

int n,t;
int a[100000+1];

bool valid(int k){
    if(a[0]>k)return false;
    if(a[0]==k)k--;
    for(int i=1 ; i<n ; ++i){
        if(a[i]-a[i-1]==k)--k;
        else if(a[i]-a[i-1]>k)return false;
    }
    return true;
}

int main()
{
    scanf("%d",&t);
    for(int i=1 ; i<=t ; ++i){
        scanf("%d",&n);
        for(int j=0 ; j<n ; ++j)scanf("%d",&a[j]);
        int st=0,ed=1e7+5;
        while(st<ed){
            int mid=st+(ed-st)/2;
            if(valid(mid))ed = mid;
            else  st = mid+1;
        }
        printf("Case %d: %d\n",i,st);
    }
    return 0;
}
