#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>v;
    int arr[100000],n;
    scanf("%d",&n);
    int mx=-1;
    int mn[100005];
    int posmax;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=mx){
            mx=arr[i];
            posmax = i;
        }
    }

        mn[n]=0;
    for(int i = n-1;i>=0;i--)
        mn[i] = max(arr[i],mn[i+1]);

    for(int i = 0;i<n;i++){
      if(arr[i]>=arr[posmax] && arr[i]>=mn[i+1]){
        cout<<"both"<<endl;
      }else if(arr[i]<arr[posmax]&& arr[i]>=mn[i+1] && posmax>i+1){
      cout<<"left"<<endl;
      }else if(arr[i]<arr[posmax] && arr[i]>=mn[i+1]&&posmax<i+1){
      cout<<"right"<<endl;
      }else if(arr[i]<arr[posmax] && arr[i]<mn[i+1] && arr[i]<arr[i-1]){
      cout<<"none"<<endl;
      }else if(arr[i]<arr[posmax] && arr[i]<mn[i+1] && (i==n-1)){
      cout<<"right"<<endl;
      }else if(arr[i]<arr[posmax]&& arr[i]<mn[i+1] && arr[i]>=arr[i-1]){
      cout<<"left"<<endl;
      }
    }
    return 0;
}
