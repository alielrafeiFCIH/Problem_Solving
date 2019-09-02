#include <bits/stdc++.h>

using namespace std;
int a[1000006];
int main()
{
    int n,x,ans=0;
    string dayname;
    string days = "SsmTwtF";
    scanf("%d",&n);
    cin>>dayname;
    scanf("%d",&x);
    int current_day;
    if(dayname=="Saturday"){
        current_day = 0;
    }else if(dayname=="Sunday") {
        current_day = 1;
    }else if(dayname=="Monday"){
        current_day = 2;
    }else if(dayname=="Tuesday"){
        current_day = 3;
    }else if(dayname=="Wednesday"){
        current_day = 4;
    }else if(dayname=="Thursday"){
        current_day = 5;
    }else{
        current_day = 6;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(days[current_day]=='S'||days[current_day]=='s'){
        }else if(a[i]>=x){
            ans++;
        }
        current_day = (current_day+1)%7;
    }
    printf("%d",ans);

    return 0;
}
