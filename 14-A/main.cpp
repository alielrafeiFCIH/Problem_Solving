#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int s=-1,e=-1;
    int temps =-1,tempe=-1,index1=-1,index2=-1;
    char c;
    char a[50][50];
    for(int i =0 ;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>c;
        if(index1==-1&&c=='*'){
            index1=i;
        }
           if(c=='*'&&s==-1){
            s=j;

           }
           if(c=='*'&&s!=-1){
            e=j;
            index2=i;
           }
      a[i][j]=c;



        }
        if(temps==-1&&tempe==-1){
            temps=s;
            tempe=e;
        }else if(s!=-1&&e!=-1){
        temps = min(temps,s);
        tempe = max(tempe,e);
        }
        s=-1;
        e=-1;
    }
    int flag=0;
    for(int i = index1 ;i<=index2;i++){
        for(int j=0 ;j<m;j++){
            if(j>=temps&&j<=tempe){

                printf("%c",a[i][j]);

            }
        }
//        if(i==n-1){
//            return 0;
//        }
        if(flag!=-1){
        printf("\n");
        }
        flag = 0;
    }
    return 0;
}
