#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    string a;
    string b = "";
    int flag=0;
    scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            cin>>a;
            for(int j=0;j<m-1;j++){
                  if(a[j]!=a[j+1]){

                        flag++;

                  }
            }
            if(b.empty()){
                b=a;
            }else{

                for(int i = 0 ;i<m-1;i++){
                    if(b[i]==a[i]){
                        flag++;

                    }
                }
                b=a;

            }}


        if(flag==0){
            cout<<"YES";
        }else{
        cout<<"NO";
        }

    return 0;
}
