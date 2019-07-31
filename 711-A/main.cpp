#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0;
    vector<string>v;
    scanf("%d",&n);
    for(int i = 0 ;i<n;i++){
            string a ;
            cin>>a;
            int s = a.length();
            if(flag!=1){
            for(int j = 0 ;j<s-1;j++){
                if(a[j]=='O'&&a[j+1]=='O'){
                        a[j]='+';
                        a[j+1]='+';
                    flag=1;
                    break;
                }
            }
        }
        v.push_back(a);

    }
    if(flag==1){
            printf("YES\n");
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }else{
        printf("NO");
    }
    return 0;
}
