    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int numbers[8] ={1,2,3,4,5,6,7,8};
        int n;
        scanf("%d",&n);
        int per = n;
        sort(numbers,numbers+n);
        for(int i =1;i<n;i++)per*=i;
        int iterator = 0;
        do{
    		printf("%d",numbers[0]);
            for(int i =1;i<n;i++){
                printf(" %d",numbers[i]);
            }
            printf("\n");
        }while(next_permutation(numbers,numbers+n));
    //    long long a,b,c;
    //    cin>>a>>b;
    //    if(a%b==0||b%a==0){
    //        printf("Multiples");
    //    }else{
    //        printf("No Multiples");
    //    }
    //    if(a+b>c&&a+c>b&&b+c>a){
    //        printf("Valid");
    //    }else{
    //        printf("Invalid");
    //    }
        return 0;
    }
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int numbers[8] ={1,2,3,4,5,6,7,8};
//    int n;
//    scanf("%d",&n);
//    int per = n;
//    sort(numbers,numbers+n);
//    for(int i =1;i<n;i++)per*=i;
//    int iterator = 0;
//    do{
//        for(int i =0;i<n;i++){
//            printf("%d ",numbers[i]);
//        }
//        iterator++;
//        if(iterator==per)break;
//        printf("\n");
//    }while(next_permutation(numbers,numbers+n));
////    long long a,b,c;
////    cin>>a>>b;
////    if(a%b==0||b%a==0){
////        printf("Multiples");
////    }else{
////        printf("No Multiples");
////    }
////    if(a+b>c&&a+c>b&&b+c>a){
////        printf("Valid");
////    }else{
////        printf("Invalid");
////    }
//    return 0;
//}
//
//
////#include <bits/stdc++.h>
////
////using namespace std;
////
////int main()
////{
//////string s;
//////cin>>s;
//////int n=0;
//////int i=0,e=0,t=0;
//////for(int j=0;j<s.length();j++){
//////    if(s[j]=='n'){
//////    n++;
//////    continue;
//////    }
//////    else if(s[j]=='i'){
//////        i++;
//////         continue;
//////    }else if(s[j]=='e'){
//////    e++;
//////     continue;
//////    } else if(s[j]=='t'){
//////    t++;
//////     continue;
//////    }
//////
//////}
//////int answer=0;
//////    int x=3;
//////while(n>=x && e>=3 && i>=1 && t>=1){
//////        answer++;
//////        n-=x;
//////        x=2;
//////        e-=3;
//////        i-=1;
//////        t-=1;
//////    }
//////    printf("%d",answer);
//////printf("%d %d %d %d\n",n,e,i,t);
//////int answer=min(min(n/3,e/3),min(t,i));
//////
//////p
//////#include <bits/stdc++.h>
//////
//////using namespace std;
//////
//////int main()
//////{
//////
////////    int numbers[8] ={1,2,3,4,5,6,7,8};
////////    int n;
////////    scanf("%d",&n);
////////    int per = n;
////////    sort(numbers,numbers+n);
////////    for(int i =1;i<n;i++)per*=i;
////////    int iterator = 0;
////////    do{
////////        for(int i =0;i<n;i++){
////////            printf("%d ",numbers[i]);
////////        }
////////        iterator++;
////////        if(iterator==per)break;
////////        printf("\n");
////////    }while(next_permutation(numbers,numbers+n));
////////    long long a,b,c;
////////    cin>>a>>b;
////////    if(a%b==0||b%a==0){
////////        printf("Multiples");
////////    }else{
////////        printf("No Multiples");
////////    }
////////    if(a+b>c&&a+c>b&&b+c>a){
////////        printf("Valid");
////////    }else{
////////        printf("Invalid");
////////    }
//////    return 0;
//////}
//////#include <bits/stdc++.h>
//////
//////using namespace std;
//////long long int a[10000000];
//////long long int a1[1000000]={0};
//////long long int b[1000000]={0};
//////int main()
//////{
//////    long long int n,t,q,r1,r2;
//////    cin>>n;
//////    for(int i=1;i<=n;++i){
//////        cin>>a[i];
//////    }
//////     for(int i=1;i<=n;i++){
//////        a1[i]+=a[i]+a1[i-1];
//////    }
//////    sort(a,a+n+1);
//////    for(int i=1;i<=n;i++){
//////        b[i]+=a[i]+b[i-1];
//////    }
//////    cin>>t;
//////    while(t--){
//////
//////    cin>>q;
//////    if(q==2){
//////            cin>>r1>>r2;
//////       cout<<b[r2]-b[r1-1]<<endl;
//////    }else{
//////        cin>>r1>>r2;
//////       cout<<a1[r2]-a1[r1-1]<<endl;
//////    }
//////
//////    }
//////
//////    return 0;
//////}
////
//////    int numbers[8] ={1,2,3,4,5,6,7,8};
//////    int n;
//////    scanf("%d",&n);
//////    int per = n;
//////    sort(numbers,numbers+n);
//////    for(int i =1;i<n;i++)per*=i;
//////    int iterator = 0;
//////    do{
//////        for(int i =0;i<n;i++){
//////            printf("%d ",numbers[i]);
//////        }
//////        iterator++;
//////        if(iterator==per)break;
//////        printf("\n");
//////    }while(next_permutation(numbers,numbers+n));
//////    long long a,b,c;
//////    cin>>a>>b;
//////    if(a%b==0||b%a==0){
//////        printf("Multiples");
//////    }else{
//////        printf("No Multiples");
//////    }
//////    if(a+b>c&&a+c>b&&b+c>a){
//////        printf("Valid");
//////    }else{
//////        printf("Invalid");
//////    }
////    return 0;
////}
