#include <bits/stdc++.h>

using namespace std;
 int arr[5];
int main()
{

    int n;
    scanf("%d",&n);
    double ans = 0.0;
    char grade;
    for(int i=0;i<n;i++){
        scanf(" %c",&grade);
        arr[grade-'A']++;
    }
    ans = (double)(arr[0]*4+arr[1]*3+arr[2]*2+arr[3]*1)/(double)n;
    printf("%.9f",ans);
    return 0;
}
