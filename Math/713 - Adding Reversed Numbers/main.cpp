#include <bits/stdc++.h>

using namespace std;
void rev(string &a ){
        int s=0;
        int e=(a.length()-1);
    while(s<e){
            char temp = a[s];
            a[s]= a[e];
            a[e] = temp;
            s++;
            e--;

        }

}
void sum(string a,string b){
int num1 = a.size();
int num2 = b.size();

int n1=0;
int n2=0;
vector<int>v(num1+1,0);

    if(num1 == 0 || num2 == 0){
        return ;
    }
    int carry = 0;
    for(int i = num1-1;i>=0;i--){
       int  x = a[i]-'0';
       int  y = b[i]-'0';
      carry = 0;
       int  sum = (x+y) + v[n2] + carry;
       carry = sum/10;
       v[n1+n2]= sum%10;
        n2++;
       if(carry>0){

        v[n1+n2]+=carry;
       }

    }
    int s = n2;
    int flag =0;
    if(v[n2]==0){
            for(int i = 0;i<n2;i++){
                if(v[i]==0 && flag == 0){
                    continue;
                }else{
                    flag = 1;
                    printf("%d",v[i]);
                }
            }
    }else{
        for(int i = 0;i<=n2;i++){
                if(v[i]==0 && flag == 0){
                    continue;
                }else{
                    flag = 1;
                    printf("%d",v[i]);
                }
            }
    }


    return ;
}


int main()
{
    int c ;
    string a;
    string b;

    scanf("%d",&c);
    for(int i = 0;i<c;i++){
        cin>>a;
        cin>>b;
        int x = a.length();
        int y = b.length();
        int sizz = abs(x-y);
        if(a.length()>b.length()){
            for(int j = 0;j<sizz;j++)
                b+='0';
        }else if(a.length()<b.length()){
                for(int j = 0 ;j<sizz;j++)
                a+='0';
        }
    rev(a);
    rev(b);
    sum(a,b);
    printf("\n");
    }
    return 0;
}



