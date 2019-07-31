#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<*min_element(arr,arr+7)<<endl;
    cout<<*max_element(arr,arr+7)<<endl;

    return 0;
}
