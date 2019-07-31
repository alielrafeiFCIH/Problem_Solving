#include <bits/stdc++.h>


using namespace std;

int main()
{
    char time_1,time_2;
    int hour_time_a , hour_time_b,min_time_a , min_time_b;
    scanf("%d %c %d",&hour_time_a,&time_1,&min_time_a);
    scanf("%d %c %d",&hour_time_b,&time_2,&min_time_b);

    int time_a_min = hour_time_a*60 + min_time_a;
    int time_b_min = hour_time_b*60 + min_time_b;

    int difference  = abs(time_a_min-time_b_min)/2;

    if(time_a_min<time_b_min){
        time_a_min+=difference;
        hour_time_a = (time_a_min/60)%24;
        min_time_a = (time_a_min%60);
        if(hour_time_a<10){
            if(min_time_a<10){
                printf("0%d:0%d",hour_time_a,min_time_a);
            }else{
                printf("0%d:%d",hour_time_a,min_time_a);
            }
        }else{
            if(min_time_a<10){
                printf("%d:0%d",hour_time_a,min_time_a);
            }else{
                printf("%d:%d",hour_time_a,min_time_a);
            }

        }

    }else{
        time_b_min+=difference;
        hour_time_b = (time_b_min/60)%24;
        min_time_b = (time_b_min%60);
        if(hour_time_b<10){
            if(min_time_b<10){
                printf("0%d:0%d",hour_time_b,min_time_b);
            }else{
                printf("0%d:%d",hour_time_b,min_time_b);
            }
        }else{
            if(min_time_b<10){
                printf("%d:0%d",hour_time_b,min_time_b);
            }else{
                printf("%d:%d",hour_time_b,min_time_b);
            }

        }
    }

    return 0;
}
