#include <bits/stdc++.h>
using namespace std;

const int N = 5;
int vis[N];
vector<int> v;

void backtracking(){
    if(v.size() == N){
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }


    for(int i = 0 ; i < N ; i++){
        if(vis[i] == 0){
            v.push_back(i+1);
            vis[i] = 1;
            //do
            backtracking();
            vis[i] = 0;
            v.pop_back();
        }
    }

}


void backtrack(int idx = 1 , int sum = 0){
    if(idx == N){
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        cout << "sum = " << sum << endl;
        return;
    }

    v.push_back(idx);
    //sum += idx;
    backtrack(idx+1 ,sum+idx);
    //sum -= idx;
    v.pop_back();
    backtrack(idx+1 , sum);
}

int dfs(int u){
    int cnt = 1;
    vis[u] = 1;
    for(int i = 0 ; i < n ; i++){
        if(vis[i] == 0){
             cnt += dfs(i);
        }
    }
    return cnt;
}

int main(){

    backtrack();

    return 0;
}
