#include <bits/stdc++.h>

using namespace std;

int main()
{
   string answer="",temp,temp1,temp2,main_string;
   cin>>main_string;
   if(main_string.length()==1||main_string.length()==2){cout<<main_string;return 0;}
   for(int i=0;i<temp.length()-1;i++){
        temp2 = main_string.substr(i+1);
        temp1 = main_string.substr(0,i+1);
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        temp = temp1+temp2;
       // cout<<temp1<<" "<<temp2<<endl;
        if(answer.empty()){
            answer=temp;
        }else {
            if(temp<answer){
                answer=temp;
            }
        }
   }
   cout<<answer;
    return 0;
}
