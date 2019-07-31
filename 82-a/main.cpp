#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int sum = 5;
  int i = 0;
  if(n==1){
    printf("Sheldon");
    return 0;
  }else if(n==2){
  printf("Leonard");
  return 0;
  }else if(n==3){
  printf("Penny");
  return 0;
  }else if(n==4){
  printf("Rajesh");
  return 0;
  }else if(n==5){
  printf("Howard");
  return 0;
  }


  while(n>sum){
        i++;
    sum+=5*pow(2,i);
  }
  if(sum==n){
    printf("Howard");
    return 0;
  }
  int levelofn =0;
  for(int m=0;m<i;m++){
    levelofn+=5*pow(2,m);
  }

    int leveln=n-levelofn;

  int levelatn = 5*pow(2,i)/5;
  int j=0;
  for(int lvl=1;lvl<=5;lvl++){
    if(leveln<=levelatn*lvl){
        j=lvl;
        break;
    }
  }
  if(j==1){
    printf("Sheldon");
  }else if(j==2){
  printf("Leonard");
  }else if(j==3){
  printf("Penny");
  }else if(j==4){
  printf("Rajesh");
  }else if(j==5){
  printf("Howard");
  }

    return 0;
}
