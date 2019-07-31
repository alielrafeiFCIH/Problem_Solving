#include <bits/stdc++.h>

using namespace std;
int a[100005];
int b[100005];
void rev(int s ,int e){
    while(s<e){
        int temp = a[s];
        a[s]=a[e];
        a[e] = temp;
        s++;
        e--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0 ;i<n; i++)scanf("%d",&a[i]);

    for(int i = 0;i<n;i++)b[i]=a[i];
    sort(b,b+n);
    int s=-1,e=-1;
    for(int i = 0 ;i<n;i++){
        if(a[i]!=b[i]&&s==-1){
               s=i;
        }
        if(a[i]!=b[i]){
               e=i;
        }

    }
    if(s==-1&&e==-1){
        cout<<"yes\n"<<"1 1"<<endl;
        return 0;
    }
    rev(s,e);
    for(int i = 0 ;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"no";
            return 0;
        }

        }
    cout<<"yes\n"<<s+1<<" "<<e+1<<endl;
    return 0;
}
