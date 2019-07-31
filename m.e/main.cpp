#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    scanf("%d",&n);
    string s;
    int cont=0, index=0;
    vector<string>v;
    vector<string>v1;
    int arr[1000];
    map <string ,int>m;
    for(int i = 0 ;i<n;i++){
    cin>>s;
        int temp = s.length();
        string f="";
       for(int j = 0 ;j<temp;j++){
        if(s[j]!='+'&&s[j]!='='){
            f+=s[j];
            if(s[j]=='x'){
                stringstream x1;
                x1<<s.substr(j+1,s.size());
                x1>>arr[j];
                m[s.substr(j,s.size())]++;
                cont++;
            }

        }else{

        v.push_back(f);
          if(s[j]=='='){
                    v.push_back(s.substr(j,temp-1));
            }
         f = "";
        }

       }
        for(int j  = 0 ; j <cont-1;j++){
                string t;
            for(int k = 0 ;k<cont-1;k++){
                if(arr[k]>arr[k+1]){
                t = v[k];
                v[k] = v[k+1];
                v[k+1] = t;
                }else{
                t = v[k+1];
                v[k+1] = v[k];
                v[k] = t;
                }
                t = "";
            }
        }


    }
    return 0;
}
