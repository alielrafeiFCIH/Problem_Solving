#include <bits/stdc++.h>

using namespace std;
const int num = 6000000;
bool a[num];
int main()
{
    int n;
    memset(a,false,sizeof(a));
    scanf("%d",&n);
    for(int i = 0 ;i<=500;i++)
        = i*(i+1)/2,a[x]=true;
    a[n]?printf("YES"):printf("NO");
    return 0;
}
//another solution better solution
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int a[501];
//int main()
//{
//    int n;
//
//    scanf("%d",&n);
//    for(int i = 0 ;(i*(i+1)/2)<=500;i++)
//      a[i*(i+1)/2]=1;
//
//    a[n]?printf("YES"):printf("NO");
//    return 0;
//}
