#include <iostream>

using namespace std;
int myfunction(int i,int j){
return (i<j);
}
int main()
{int arr[]={1,2,3,4,5,4,3,2,1};
sort(arr,arr+9);
if(binary_search(v,v+9,3))
    cout<<"found";else cout<<"not found";
sort(v,v+9,myfuntion);
cout<<" looking";
if(binary_search(v,v+9,myfunction))
    cout<<"found";
else
    cout<<"not found";
    return 0;
}
