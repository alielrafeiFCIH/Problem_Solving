#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LENGTH 100
int countFreq(char  *txt,char *subtxt){
    int res =0 ;
    int size_sub = strlen(subtxt);
    int size_txt = strlen(txt);
    int i=0;
    int j=0;

    while(i<size_txt){
        for(j=0;j<size_sub;j++){
            if(txt[i]!=subtxt[j]){
                i++;
                break;
            }
            i++;
        }
        if(j==size_sub)res++;
    }



return res;
}

int main()
{
//    char * txt;
//    char * subtxt;
//    scanf("%d %d",&size_txt,&size_sub_txt);
//    txt = (char *) malloc(sizeof((sizeof(char)*size_txt)));
//    subtxt = (char *) malloc(sizeof((sizeof(char)*size_sub_txt)));
    char txt[MAX_STRING_LENGTH];
    char subtxt[MAX_STRING_LENGTH];
    scanf("%s",&txt);
    scanf("%s",&subtxt);
    printf("%d",countFreq(&txt,&subtxt));

    return 0;
}
