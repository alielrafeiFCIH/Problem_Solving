#include <iostream>

using namespace std;
int main()
{
    long long int t,sum = 0;
    string n;
    cin >> t;
    cin >> n;
    for(int i =0;i<n.size();i++){
        int temp  = n[i]-'0';
        sum+=temp;
    }
    cout << sum;
}
