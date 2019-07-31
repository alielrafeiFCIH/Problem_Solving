#include <bits/stdc++.h>

using namespace std;

int step ,m;
int gcd(int x, int y) {
    int t;
    while(x%y) {
        t = x, x = y, y = t%y;
    }
    return y;
}
int main()
{


//    while(scanf("%d %d", &step, &m)==2){
//
//        int x = 0;
//        set<int>s;
//        s.insert(0);
//        for(int i = 1;i<m;i++){
//            x = (x+step)%m;
//            s.insert(x);
//        }
//        if(s.size()==m){
//            printf("%10d%10d    Good Choice\n", step, m);
//        }else{
//           printf("%10d%10d    Bad Choice\n", step, m);
//        }
//        puts("");
//        s.clear();
//    }

int a, b;
    while(scanf("%d %d", &a, &b) == 2) {
        if(gcd(a, b) == 1)
            printf("%10d%10d    Good Choice\n", a, b);
        else
            printf("%10d%10d    Bad Choice\n", a, b);
        puts("");
}

    return 0;
}
