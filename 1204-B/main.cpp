//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int mx = 0,mn =0;
//    int n,l,r;
//    scanf("%d%d%d",&n,&l,&r);
//    for(int i=0;i<r;i++){mx += (1<<i);}
//    for(int i=r;i<n;i++){mx+=(1<<(r-1));}
//
//    for(int i=0;i<l;i++){mn += (1<<i);}
//    for(int i=l;i<n;i++){mn++;}
//
//    printf("%d %d",mn,mx);
//
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;
vector<int>v;
int main()
{
vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    for (int x : vect)
        cout << x << " ";


    return 0;
}
