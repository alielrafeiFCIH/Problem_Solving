#include <bits/stdc++.h>

using namespace std;
 pair<int,int> v[200005];
 string s,ans_string;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    string number = "0123456789";
    cin>>s;
    string temp = s;
    int count =0,ans=INT_MAX;
    for(int i =0;i<10;i++){
        s=temp;
        count = 0;
        for(int j=0;j<n;j++){
            v[j] = make_pair(abs((s[j]-'0')-i),s[j]-'0'>=i ? j-n : n-j);
        }
        sort(v,v+n);
        for(int j=0;j<k;j++){
            count+=v[j].first;
            int index = n-abs(v[j].second);
            s[index]=number[i];
        }
        if(count<ans||ans_string>s&&count==ans)ans=count,ans_string=s;
    }
    printf("%d\n",ans);
    cout<<ans_string;

    return 0;
}
