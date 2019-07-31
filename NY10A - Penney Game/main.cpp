#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,x;
   cin>>n;
   string s;
   while(n!=0){
        cin>>x;
        cin>>s;
        int TTT=0, TTH=0, THT=0, THH=0, HTT=0, HTH=0, HHT=0 ,HHH=0;
        for(int i=0;i<s.length()-1;i++){
                string s2=s.substr(i,3);
                if(s2=="TTT"){
                        ++TTT;
                }else if(s2=="TTH"){
                ++TTH;
                }else if(s2=="THT"){
                ++THT;
                }else if(s2=="THH"){
                ++THH;
                }else if(s2=="HTT"){
                ++HTT;
                }else if(s2=="HTH"){
                ++HTH;
                }else if(s2=="HHT"){
                ++HHT;
                }else if(s2=="HHH"){
                ++HHH;
                }

        }
    cout<<x<<" "<<TTT<<" "<<TTH<<" "<<THT<<" "<<THH<<" "<<HTT<<" "<<HTH<<" "<<HHT<<" "<<HHH<<endl;
    --n;
   }
    return 0;
}
