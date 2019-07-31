#include <bits/stdc++.h>

using namespace std;
long long int a[2000+5];
int main()
{
////    cout << "Hello world!" << endl;
// int n;
//scanf("%d",&n);
//for(int i=0;i<n;i++){
//    scanf("%d",&a[i]);
//}
//sort(a,a+n);
//int total_time=a[0],ans=1;
//for(int i=1;i<n;i++){
//    if(total_time<=a[i]){
//        ++ans;
//        total_time+=a[i];
//    }
//}
//cout<<ans<<endl;
//int n,d;
//scanf("%d%d",&n,&d);
//for(int i=0;i<n;i++){
//    scanf("%d",&a[i]);
//}
//int ans=0;
//for(int i=0;i<n-1;i++){
//    if(a[i]<a[i+1]){
//
//    }else{
//        int x=a[i]/d;
//        if(x==1){
//                a[i+1]=a[i+1]+d;
//        ans+=ans+1;
//        }else{
//        a[i+1]=a[i+1]+(x*d);
//        ans=ans+x;
//        }
//
//    }
//
//}
//printf("%d",ans);
int n,m,ans=0;
cin>>n>>m;
int x,y,z=0,i=2;
while(n==0||m==){
    if(n>m){
        n=n-1;
        m=m-2;
        ++ans;
    }else{
        m=m-1;
        n=n-2;
    }
}
//    int n,d;
//    int c=0;
//    scanf("%d%d",&n,&d);
//    for(int i=0 ; i<n ; ++i)scanf("%I64d",&a[i]);
//    for(int i=1 ; i<n ; ++i){
//        if(a[i]<=a[i-1]){
//            int x=((a[i-1]-a[i])/d)+1;
//            c+=x;
//            a[i]+=x*d;
//        }
//    }
//    printf("%d\n",c);
    return 0;
}
