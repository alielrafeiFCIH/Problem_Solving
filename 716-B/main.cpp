#include <bits/stdc++.h>

using namespace std;
string word;

bool is_alpha(int start,int end ){
    int freq[26];
    queue<char>q;
    memset(freq,0,sizeof(freq));
    int count_mark=0;
    for(int i = start;i<=end;i++){
        if(word[i]!='?'){
            if(freq[word[i]-'A']==0){
                freq[word[i]-'A']++,q.push(word[i]);
            }else{
                return false;
            }
        }else{
            q.push(word[i]);
            count_mark++;
        }
    }
    queue<char>qq;
    for(int i=0;i<26;i++){
        if(!freq[i]&&count_mark!=0)qq.push(i+'A'),count_mark--;
    }
    queue<char>ans;
    while(!q.empty()){
        if(q.front()=='?'&&!qq.empty()){ans.push(qq.front());qq.pop();q.pop();}
        else{ans.push(q.front());
        q.pop();}
    }
    if(ans.size()==26){
        while(!ans.empty()){
            word[start]=ans.front();
            ans.pop();
            start++;
        }
        return true;
    }
    return false;
}
int main()
{
    int end=25;
    cin>>word;
    int size = word.size();
    for(int i=0;i<size&&end<size;i++){

        if(is_alpha(i,end)){
            for(int j=0;j<size;j++){
                if(word[j]=='?')printf("A");
                else printf("%c",word[j]);
            }
            return 0;
        }
        end++;
    }
    printf("-1");
    return 0;
}
