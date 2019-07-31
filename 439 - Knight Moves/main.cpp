#include <bits/stdc++.h>

using namespace std;
bool valid(int x,int y){
if(x>8||x<1||y>8||y<1)return false;

return true;
}
int main()
{
    string p1,p2;
    map<char,int>mp;
    for(int i =0 ;i<8;i++){
        mp['a'+i]=i+1;
    }

    while(cin>>p1>>p2){
    map<pair<int,int>,int >len;
    queue<pair<int,int> >q;
    pair<int,int>cur;
    int x = mp[p1[0]];
    int y = p1[1]-'0';
    int y1 = mp[p2[0]];
    int x1 = p2[1]-'0';


   	enum dir { uur, uul, rru, rrd, llu, lld, ddr, ddl };
	int dx[9] = { 0,-2, -2, -1, 1, -1, 1, 2, 2 };
	int dy[9] = { 0,1, -1, 2, 2, -2, -2, 1, -1 };

    int dep = 0,sz=1;
    q.push(make_pair(y,x));
        for(;!q.empty();dep++,sz=q.size()){
            while(sz--){
                cur = q.front();q.pop();
                for(int i = 0;i<9;i++){
                    int xx = cur.first+dx[i];
                    int yy = cur.second+dy[i];
                    pair<int,int>temp;
                    temp = {xx,yy};
                    if(len[temp]!=0)
                        continue;
                    if(valid(xx,yy)){
                        q.push(temp);
                        len[temp]=dep+1;
                        if(temp.first==x1&&temp.second==y1){
                                if(dx[i]==0&&dy[i]==0){
                                    cout<<"To get from "<<p1<<" to "<<p2<<" takes "<<dep<<" knight moves.\n";
                                }else cout<<"To get from "<<p1<<" to "<<p2<<" takes "<<dep+1<<" knight moves.\n";
                            break;
                        }
                    }

                }
            }
        }


    }

    return 0;
}
