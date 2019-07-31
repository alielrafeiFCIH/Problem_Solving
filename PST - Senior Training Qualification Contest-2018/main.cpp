#include <bits/stdc++.h>

using namespace std;
//int h[100000+9];

queue<int>q;
void expand(int node){
    q.push(node*2);
    q.push(node*2+1);

}
int main()
{
//   freopen("notshort.in" , "r" , stdin);
//   int t;
//   int n;
//   scanf("%d",&t);
//   while(t--){
//
//    scanf("%d",&n);
//    int x;
//    scanf("%d",&x);
//    int molty_h =x;
//    int h ;
//    int count = 0;
//    for(int i =1;i<n;i++){
//        scanf("%d",&x);
//        if(x>=molty_h)count++;
//    }
//    printf("%d\n",count);
//   }
//----------------------------------------------------------------------------------------------------------


//freopen("morty.in" , "r" , stdin);
//int t;
//scanf("%d",&t);
//while(t--){
//    long long n;
//    cin>>n;
//    long long ans = ((n*(n-1)/2))-n;
//    cout<<ans<<endl;
//
//}
//-------------------------------------------------------------------------------------------------------------

//freopen("simple.in" , "r" , stdin);
//int t;
//scanf("%d",&t);
//long long int x,y;
//while(t--){
//cin>>x>>y;
//int ans = 0;
//if(x==y){
//    printf("0\n");
//}else{
//    if(x<0&&y<0){
//        y = (-1)*y;
//        x = (-1)*x;
//        if(x>y){
//            cout<<(-1)*y-(-1)*x<<endl;
//        }else {
//            cout<<y-x+2<<endl;
//        }
//
//    }else if(x>=0&&y>=0){
//        if(x==0){
//            cout<<y<<endl;
//        }else if(y==0){
//            cout<<x+1<<endl;
//        } else if(x>y){
//            cout<<x-y+2<<endl;
//        }else{
//            cout<<y-x<<endl;
//        }
//
//    }else if (x>=0&&y<0){
//        if(x==0){
//            cout<<((-1)*y)+1<<endl;
//        }else if(x>((-1)*y)){
//            cout<<x-((-1)*y)+1<<endl;
//        }else{
//            cout<<((-1)*y-x)+1<<endl;
//        }
//
//    } else if (x<0&&y>=0){
//            if(y==0){
//                cout<<(-1)*x<<endl;
//            }else if(((-1)*x)>y){
//                cout<<((-1)*x)-y+1<<endl;
//            }else{
//                cout<<(y-(-1)*x)+1<<endl;
//            }
//
//
//
//    }else if(x*(-1)==y){
//        printf("1\n");
//    }
//}
//}
//--------------------------------------------------------------------------------------------------------
//freopen("leaves.in" , "r" , stdin);
//int t;
//scanf("%d",&t);
//long long u,k;
//while(t--){
//    cin>>u>>k;
//
//    int l = 2*u;
//    int r = 2*u+1;
//    int ans = 0;
//    q.push(l);
//    q.push(r);
//    int count = 0;
//    while(!q.empty()||count!=k){
//        l = q.front();
//        q.pop();
//        ans = l;
//        count++;
//        if(count==k)break;
//        expand(l);
//
//        r = q.front();
//        q.pop();
//        ans = r;
//        count++;
//
//        if(count==k)break;
//        expand(r);
//
//    }
//    cout<<ans<<endl;
//
//    queue<int> emptyy;
//    swap(q,emptyy);
//
//}
//------------------------------------------------------------------------------------------------------------
//freopen("fractions.in" , "r" , stdin);


//int t;
//scanf("%d",&t);
//int n;
//int matrix [505][505];
//while(t--){
//    scanf("%d",&n);
//    int ans = n*((n*n -n)/2);
//    for(int i =1;i<=n;i++){
//        for(int j =1;j<n;j++){
//            if(i>=j){
//                matrix[i][j]=i/j;
//            }else if(i<j){
//                matrix[i][j]=0;
//            }
//        }
//    }
//
//}
//-----------------------------------------------------------------------------------------------------------------------
//freopen("meetings.in" , "r" , stdin);
//int t;
//scanf("%d",&t);
//int n,k;
//while(t--){
//    scanf("%d%d",&n,&k);
//    long long duration_day,meeting_day,meeting_profit,meeting_type;
//
//}








    return 0;
}
