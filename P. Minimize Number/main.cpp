#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int a[n];
    int ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = true;
    int i =0;
        while(flag) {

            if(a[i] % 2 == 0) {
             a[i]/=2;
             }else{
                break;
             }
            if(i == n-1){
                ans++;
                i = 0;
            }else {
                i++;
            }

    }
    cout << ans;
    return 0;
}
