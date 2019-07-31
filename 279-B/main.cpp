//#include <bits/stdc++.h>
//
//using namespace std;
//const int siz = 1e5 +6;
//int a[siz];
//int n,t;
//bool valid(int mid){
//    int tt = 0;
//    for(int i = 0;i<mid;i++){
//        tt+=a[i];
//    }
//    if(tt<=t)return true ;
//
//    int j =0 ;
//    int i = mid;
//
//    while(i<n){
//        tt-=a[j];
//        tt+=a[i];
//        j++;
//        i++;
//    if(tt<=t)return true;
//
//    }
//
//    return false;
//
//}
//int main()
//{
//
//    scanf("%d %d",&n,&t);
//    for(int i = 0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//
//    int start = 0,end = n;
//    while(start<end){
//        int mid = start + (end-start+1)/2;
//        if(valid(mid)){
//            start = mid;
//        }else{
//            end = mid-1;
//        }
//
//
//    }
//    cout<<start<<endl;
//    return 0;
//}
