#include <bits/stdc++.h>S

using namespace std;

int main()
{
    int a,g=1;
    scanf("%d",&a);
    string s,s1;
    cin>>s;
    for(int i=1;i<a;i++){
        cin>>s1;
        if(s=="10"&&s1=="01"){
            s=s1;
            ++g;
        }else if(s=="01"&&s1=="10"){
            ++g;
            s=s1;
        }
    }
    printf("%d",g);

    return 0;
}
