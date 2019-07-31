#include <iostream>

using namespace std;
void remove_zero(int &a){
    int num = 0,place =1;
    while(a){
        int temp = a%10;
        a/=10;
        if(temp){
            num +=temp*place;
            place*=10;
        }

    }
    a = num;

}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = a+b;
    remove_zero(a);
    remove_zero(b);
    remove_zero(c);
    c==a+b?puts("YES"):puts("NO");
    return 0;
}
