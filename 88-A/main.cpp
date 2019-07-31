#include <bits/stdc++.h>

using namespace std;
string s[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
int check (int a , int b){
    int count = 0;

    int i =0,c=0;
        while(1){
            if(i==12){
                i=0;
            }
            if(a==i){
                count = 1;
            }

            if(b==i && count == 1) return c;
            if(count)c++;
            i++;
        }

}
int main()
{

  string x,y,z;
  cin>>x>>y>>z;
  int a[3];
  int j = 0;
  for(int i = 0 ;i<12;i++){
    if(x==s[i]||z==s[i]||y==s[i]){
            if(x==z&&x==y){
                a[0]=i;
                a[1]=i;
                a[2]=i;
                break;
            }else if(x==z){
                a[0]=i;
                a[1]=i;
            }else if(y==z){
                a[0]=i;
                a[1]=i;
            }else if(x==y){
                a[0]=i;
                a[1]=i;
            }else{
                a[j]=i;
                j++;
            }

    }
  }
  do{
    if(check(a[0],a[1])==4&&check(a[1],a[2])==3){
            printf("major");
            return 0;
    }else if(check(a[0],a[1])==3&&check(a[1],a[2])==4){
            printf("minor");
            return 0;
    }


  }while(next_permutation(a,a+3));
    printf("strange");
    return 0;
}
