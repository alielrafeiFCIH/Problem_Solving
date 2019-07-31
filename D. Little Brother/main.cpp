#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string a,b,sign;
    int x,y;
    int answer = 0;
    for(int i = 0;i<n;i++){
    cin>>a;
    cin>>sign;
    cin>>b;
    if(sign[0]=='+'){
        stringstream ss(a);
        ss>>x;
        stringstream sss(b);
        sss>>y;
        answer = x+y;
        printf("%d\n",answer);
    }else{
      stringstream ss(a);
        ss>>x;
        stringstream sss(b);
        sss>>y;
        answer = x-y;
        printf("%d\n",answer);
    }
    }

    return 0;
}
