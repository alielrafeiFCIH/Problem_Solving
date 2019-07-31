#include <iostream>
using namespace std;
int main(){
	long long  a,b,c,d;
	long long x;
	cin>> a >> b >> c >> d;
	x = a*b*c*d;
	cout<<x<<endl;
 return 0;
}
//#include <bits/stdc++.h>
//
//using namespace std;
//bool cmp(int x,int y){
//    return x>y;
//}
//int main()
//{
//int n,sum1=0;
//int a[100];
//cin>>n;
//for(int i=0;i<n;i++){cin>>a[i];
//sum1+=a[i];
//
//}
//sort(a,a+n,cmp);
////reverse(a,a+n);
//int sum=0,cont=0;
//for(int i=0;i<n;i++){
//    sum+=a[i];
//    ++cont;
//    sum1=sum1-a[i];
//    if(sum>sum1)break;
//
//}
//cout<<cont<<endl;
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//char * to_upper(char grade[]){
//    if(grade[0]>='a')
//        return grade;
//
//        grade[0]=grade[0]+32;
//        return grade;
//
//
//}
//int main()
//{
//    int semster_hours;
//    int course_hour;
//    int no_courses;
//    double current_gpa;
//    double total_gpa;
//    double gpa_for_semster;
//    char grade [2];
//
//    printf("Please enter number of course ");
//    scanf("%d",&no_courses);
//    printf("Enter your Grade for each course\n");
//    while(no_courses--){
//    int current_points;
//    scanf(" %s",&grade);
//     grade = to_upper(grade);
//    if(grade[0]=='A'&&grad[1]=='+'){
//
//    }else
//    if(grade[0]=='C'&&grad[1]=='+'){
//
//    }else
//    if(grade[0]=='D'&&grad[1]=='+'){
//
//    }else
//    if(grade[0]=='F'&&grad[1]!='+'){
//
//    }else
//    if(grade[0]=='A'&&grad[1]!='+'){
//
//    }else
//    if(grade[0]=='B'&&grad[1]!='+'){
//
//    }else
//    if(grade[0]=='C'&&grad[1]!='+'){
//
//    }else
//    if(grade[0]=='D'&&grad[1]!='+'){
//
//    }
//
//
//    }
//    return 0;
//}
