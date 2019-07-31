#include <bits/stdc++.h>

using namespace std;
int basket [3000];
char to_lower(char ch){
    ch-=32;
    return ch;
}

int main()
{
    int n;

    scanf("%d",&n);

    string s;

    cin>>s;
    int counter=0;

    for(int i =0;i<s.length();i+=2){
            basket[s[i]-'a']++;
           if(basket[tolower(s[i+1])-'a']){
                basket[tolower(s[i+1])-'a']--;
            }else{
                counter++;
            }

    }
    printf("%d",counter);
    return 0;
}
