#include <bits/stdc++.h>

using namespace std;
bool isorted(int arr[],int arr1[],int n){
    for(int i = 0 ;i<n;i++){
        if(arr[i]!=arr1[i]){
            return false;
        }
    }
    return true;
}
bool com(int a,int b){
    return a>b;
}
int main()
{
    int maybe = 0;
    int rated = 0;
    int unrated = 0;
    int n;
    scanf("%d",&n);

    int a,b,x1=0,x2=0;
    int arr [1000],arr1[1000];
    for(int i = 0 ;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a!=b){
            rated=1;
            maybe = 0;
            unrated = 0;
        }else if(a==b){
            unrated = 1;
        }
        arr[i]=a;
        arr1[i]=a;
    }
    sort(arr1,arr1+n,com);
    if(rated){
        printf("rated");
    }else if(unrated){
        if(isorted(arr1,arr,n)){
         printf("maybe");
        }else{
            printf("unrated");
        }
    }
    return 0;
}
