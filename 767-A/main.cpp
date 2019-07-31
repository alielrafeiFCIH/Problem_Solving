#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100000];
//    vector<int>b;
    int n;
    scanf("%d",&n);
    int mx = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
        mx = max(mx,a[i]);


    }
priority_queue <int> b ;
int j = -1;
for(int i = 0;i<n;i++){
        if(a[i]!=mx){
        b.push(a[i]);
        j++;
        printf(" \n");
        }else{

            printf("%d ",a[i]);
            if(!b.empty()){
            int x = a[i];
            int temp = b.top();
            while(temp==(x-1)){
                printf("%d ",temp);
                x = temp;
                b.pop();
                temp =b.top();
                mx -= 1;
            }}
            printf("\n");
        mx -=1;
        }
}


    return 0;
}

