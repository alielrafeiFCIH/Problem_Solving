#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[1000];
    gets(s);
    s[0]=toupper(s[0]);
    printf("%s",s);
    return 0;
}
