#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char>s;
    char c;
    int count = 0;
    string str;
    cin>>str;
    int ind=0;
    while(ind!=str.length()){
    if(str[ind]=='('){
    s.push(str[ind]);
    }else if(str[ind]==')'&&!s.empty()&&s.top()=='('){
    s.pop();
    count+=2;
    }
    ind++;
    }
    printf("%d",count);
    return 0;
}
