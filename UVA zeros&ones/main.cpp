#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c=1;
    while(cin>>s){

                int n,x,y;
                vector<string>s1;
                cin>>n;
                    for(int i=0;i<n;i++){
                        cin>>x>>y;

                        int m=min(x,y),m2=max(x,y),flag1=0;
                        int m1=s[m];
                        for(int j=m;j<=m2;j++){
                            if(m1==s[j]){
                                flag1=1;
                            }else {
                                flag1=0;
                                break;
                            }
                        }
                        if(flag1==1){
                            s1.push_back("Yes");
                        }else{
                            s1.push_back("No");
                        }
                    }
                    cout<<"Case "<<c<<":"<<endl;
                    for(int i=0;i<n;i++){
                        cout<<s1[i]<<endl;
                    }

        ++c;



    }
    return 0;
}
