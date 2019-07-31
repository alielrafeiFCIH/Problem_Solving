#include <iostream>

using namespace std;

int main()
{
 int x,i,j,z,y=0,r,cunt=0;
 cin >> x ;
 int arr[x];
 for(i=0;i<x;i++){
    cin >> arr[i];
 }
 for(i=0;i<x;i++){
    if(arr[i]>=1){
            y+=arr[i];
    }else{
        cunt++;
    }
    if(cunt && y){
        cunt--;
        y--;
    }

 }
 cout << cunt;

    return 0;
}
