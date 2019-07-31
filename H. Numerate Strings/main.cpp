#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s []= {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string ss = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<string> v;
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
       for(int j = 0;j<26;j++){
            v.push_back(s[j]);
        }
    for(int x = 0 ;x<26;x++){
        string s1  = s[x];
        int z = 0;
    for(int i = 0;i<26;i++){
//            if(s1[z]==ss[i]){
//                z = i;
//            }else{
//            z++;
//
//            }

        for(int j = 0 ;j<26;j++){
                if(s1[i]!=ss[j])
                    v.push_back(s1+s[j]);




        }

    }
    }
    int c,counter=0;
    sort(v.begin(),v.begin()+n);
    for(int i = 0;i<100;i++){
        counter++;
        cout<<v[i]<<endl;
    }
    cout<<counter<<endl;
    for(int i = 0 ;i<q;i++){
        scanf("%d",&c);
        cout<<v[c-1]<<endl;
    }


    return 0;
}
