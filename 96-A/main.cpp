#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag = 0,cont=1;
    int size = s.length();
    for(int i =0;i<size;i++){
        for(int j=i;j<7+i;j++){
            if(s[i]==s[j+1]){
                cont++;

            }else{
                break;
            }
        if(cont==7){
                printf("YES");
                return 0;
            }
        }
        cont=1;

    }
    printf("NO");
    return 0;
}
