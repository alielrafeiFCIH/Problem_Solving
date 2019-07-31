#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n , s,flag=0,x,y;
    scanf("%d%d",&s,&n);
    map<int , pair <int,int> >m;
    for(int i =  0 ;i<n;i++){
        scanf("%d%d",&x,&y);
            m[i].first=x;
            m[i].second=y;
    }

    for(int i = 0 ;i<n-1;i++){
        for(int j = 0;j<n-(1+i);j++){
            if(m[j].first>m[j+1].first){
            int temp1 = m[j].first;
            int temp2 = m[j].second;
            m[j].first=m[j+1].first;
            m[j].second=m[j+1].second;
            m[j+1].first = temp1;
            m[j+1].second = temp2;
            }
        }
    }
    for(int i = 0 ;i<n;i++){


        if(s>m[i].first){
            s+=m[i].second;
        }else{
        flag = 1;
        }
    }
    if(flag==1){
        printf("NO");
    }else{
    printf("YES");
    }
    return 0;
}
