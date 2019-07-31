#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    for(int i=0;i<arr.length();i++){
            arr[i]=tolower(arr[i]);
    if(arr[i]!='a'&&arr[i]!='A'&&arr[i]!='o'&&arr[i]!='O'&&arr[i]!='y'&&arr[i]!='Y'&&arr[i]!='e'&&arr[i]!='E'&&arr[i]!='u'&&arr[i]!='U'&&arr[i]!='i'&&arr[i]!='I'){
        cout<<"."<<arr[i];
    }}
    return 0;
}
