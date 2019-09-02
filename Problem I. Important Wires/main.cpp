#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("important.in","r",stdin);
    freopen("important.out","w",stdout);
    int n;
    scanf("%d",&n);
    printf("Yes\n");
    getchar();
    string str[100];
    for(int i=1;i<=n;i++)
    {
        getline(cin,str[i]);
    }
    for(int i=1;i<=n;i++)
        cout<<str[i][0]<<" |";
    cout<<"~"<<str[n][0]<<endl;

    return 0;
}
