#include <bits/stdc++.h>

using namespace std;
int tree[200005];
int visted[200005];
int max_index= 0;
pair<int,string> fix_node(string s){
    string number = s.substr(1,s.find(',')-1);
    string moves = s.substr(s.find(',')+1);
    moves = moves.substr(0,moves.size()-1);
    int num ;
    stringstream ss;
    ss<<number;
    ss>>num;
    return make_pair(num,moves);

}
void dfs(int node){
    if(tree[node]==-1)return;
    visted[node]=1;
        if(!visted[node+(node+1)]){
            dfs(node+(node+1));
        }
        if(!visted[node+(node+2)])
            dfs(node+(node+2));
}
int main()
{
  string s;
  memset(tree,-1,sizeof(tree));
  bool flag = true;
  vector<int>v;
  v.push_back(0);
  while(cin>>s){
    if(s=="()"){
        if(!flag){printf("not complete\n");

        }else{
            int count =0;
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
               if(!visted[v[i]]){
                    dfs(v[i]);
                    count++;
               }
            }
            if(count>1){
                printf("not complete\n");
            }else{
                for(int i=0;i<200005;i++){
                    if(tree[i]!=-1){
                    if(i)printf(" ");
                    printf("%d",tree[i]);
                    }

                }
                 printf("\n");
            }

        }
        flag = true;
        memset(tree,-1,sizeof(tree));
        memset(visted,0,sizeof(tree));
        v.clear();
        v.push_back(0);
    }else{
        pair<int,string>node = fix_node(s);
        int index = 0;
        for(int i=0;i<node.second.size();i++){
            if(node.second[i]=='L'){
                index=index+(index+1);
            }else{
                index=index+(index+2);
            }
        }
        if(tree[index]!=-1){
            flag= false;
        }else{
            tree[index]=node.first;
            v.push_back(index);

        }
    }
  }
  return 0;
}
