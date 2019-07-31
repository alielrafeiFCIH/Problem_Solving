#include <bits/stdc++.h>

using namespace std;

int main()
{   //freopen("mirror.in","r",stdin);
    int n,x,y;
    cin>>n;
    char arr[105][105];
    while(n--){
        cin>>x>>y;
        for(int i =0;i<x;i++){
            for(int j =0;j<y;j++){
                cin>>arr[i][j];
            }
        }

        int ans =0;
        bool flag = false;
        for(int j =1;j<y;j++){
            for(int k =0;k<j;k++){
                for(int i =0;i<x;i++){
                    if(arr[i][k]==arr[i][j]){
                            flag = true ;
                            ans = j;
                    }else{
                            flag = false ;
                            break;
                    }
                }
                if(flag==true){
                    break;
                }
            }
            if(flag == true ){
                cout<<ans+1<<endl;
                break;
            }
        }
        if(flag==false){
            cout<<"-1"<<endl;
        }

    }

    return 0;
}
