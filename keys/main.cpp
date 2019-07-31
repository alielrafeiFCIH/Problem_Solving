#include <bits/stdc++.h>

using namespace std;
int  a[25];
bool check(string str){
        int odd = 0;
        for (int i = 0; i < 25; i++){
            if (a[i] & 1)
            odd++;

            if (odd > 1)
                return false;
        }
        return true;
}
int main()
{
  //freopen("delta.in" , "r" , stdin);
//    int n;
//    scanf("%d",&n);
//    int c = 1;
//    while(n--){
//        string str ;
//        cin>>str;
//
//
//        memset(a,0,sizeof(a));
//
//        for(int i =0;i<str.length();i++){
//                a[str[i]-'a']++;
//        }
//        bool flag = check(str);
//        if(flag)printf("Case %d: YES\n",c);
//        else printf("Case %d: NO\n",c);
//        c++;
//    }
//-----------------------------------------------------------------------------------------------------
// freopen("math.in" , "r" , stdin);
//    int t;
//    scanf("%d",&t);
//    int num;
//    int c = 1;
//    //printf("%d",9%1);
//    while(t--){
//        set<int>s;
//        scanf("%d",&num);
//        int num1 = num;
//        s.insert(1);
//        s.insert(num);
//        for(int i =2;i<num;i++){
//            if(num1%i==0)
//            if((i*(num1/i))==num){
//                s.insert(i);
//                s.insert(num1);
//
//
//            }
//        }
//        int sum = 0;
//        for (set<int>::iterator it=s.begin();it!=s.end();++it)
//                sum = sum + (*it);
//
//        printf("Case %d: %d\n",c,sum);
//        c++;
//        s.clear();
//
//    }
//













//-----------------------------------------------------------------------------------------------------
freopen("keys.in" , "r" , stdin);
    //int days[1000000+9];
    int n,h,m;
    int t;
    scanf("%d",&t);
    int c = 1;
    while(t--){
        scanf("%d%d%d",&n,&m,&h);
    int id , day;
    int start_day = n-(m-1);
    set<int>s;
    for(int i =0;i<h;i++){
        scanf("%d %d",&id,&day);
        if(day>=start_day&&day<=n)s.insert(id);
    }
    printf("Case %d: %d\n",c,s.size());
    s.clear();
    c++;
    }


    return 0;
}
